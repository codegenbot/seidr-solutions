#include<stdio.h>
#include<math.h>
using namespace std;

bool any_int(float a, float b, float c) {
    int ai = (int)a;
    int bi = (int)b;
    int ci = (int)c;
    return (a == bi + ci || b == ai + ci || c == ai + bi);
}