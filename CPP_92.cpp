#include <cassert>

bool any_int(float a, float b, float c) {
    int ai = (int)a, bi = (int)b, ci = (int)c;
    return ai + bi == ci || ai + ci == bi || bi + ci == ai;
}

int main() {
    assert(any_int(3.01f, 4.0f, 7) == false);
    return 0;
}