#include <iostream>
#include <assert.h>
#include <cmath>

bool any_int(float a, float b, float c) {
    int ai = round(a);
    int bi = round(b);
    int ci = round(c);

    if ((ai == bi + ci) || (ai == bi - ci) || (ai == ci + bi) || (ai == ci - bi))
        return true;
    else
        return false;
}