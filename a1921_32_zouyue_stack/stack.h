#ifndef stack_h
#define stack_h
#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <stdlib.h>

typedef int dataType;
typedef struct node {
    dataType data;
    struct node *next;
}LinkStack,node;

LinkStack* InitStack();
int Empty(LinkStack *s);
void Push(LinkStack *s, dataType x);
void Pop(LinkStack *s);
dataType GetTop(LinkStack *s);

int priority(char x);
double compute(double x, double y, char op);

#endif
