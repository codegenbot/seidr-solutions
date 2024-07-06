```
#include <cassert>

bool any_int(float a, float b, float c) {
    int ai = (int)a;
    int bi = (int)b;
    int ci = (int)c;

    return ((a == ai + bi + ci) || (b == ai + bi + ci) || (c == ai + bi + ci));
}

int main() {
    assert(any_int(3.01f, 4.0f, 7.0f) == false);
}