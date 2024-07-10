```cpp
#include <assert.h>

bool any_int(float a, float b, float c) {
    int ai = (int)a;
    int bi = (int)b;
    int ci = (int)c;

    if (ai == bi + ci || ai == bi - ci || ai == ci + bi || ai == ci - bi)
        return true;
    else
        return false;
}