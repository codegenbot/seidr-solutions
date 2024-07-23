#include <iostream>

bool any_int(float a, float b, float c) {
    int ai = a;
    int bi = b;
    int ci = c;

    if (ai == bi + ci || ai == ci + bi || bi == ai + ci || bi == ci + ai || ci == ai + bi || ci == bi + ai)
        return true;
    else
        return false;
}

int main() {
    assert(any_int(3.01, 4, 7) == false);
    return 0;
}