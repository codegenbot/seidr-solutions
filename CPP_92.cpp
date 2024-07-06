#include <cassert>
#include <cmath>

bool any_int(float a, float b, float c) {
    int ai = (int)a;
    int bi = (int)b;
    int ci = (int)c;

    return ((a - ai - bi - ci) == 0 || (b - ai - bi - ci) == 0 || (c - ai - bi - ci) == 0);
}

int main() {
    assert(any_int(3.01, 4, 7) == false);
}