#include<stdio.h>
using namespace std;

bool any_int(float a, float b, float c) {
    if(a==b || a==c || b==c)
        return true;
    else
        return false;
}