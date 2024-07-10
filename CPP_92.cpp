#include <iostream>
#include <assert.h>

bool any_int(float a, float b, float c) {
    int ai = (int)a;
    int bi = (int)b;
    int ci = (int)c;

    if ((ai == bi + ci) || (ai == bi - ci) || (ai == ci + bi) || (ai == ci - bi))
        return true;
    else
        return false;
}

int main() {
    assert(any_int(3.01f, 4.0f, 7.0f) == false);
    std::cout << "Code runs correctly." << std::endl;
    return 0;