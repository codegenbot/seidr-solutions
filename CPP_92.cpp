#include <assert.h>

bool any_int(float a, float b, float c) {
    int ai = (int)a;
    int bi = (int)b;
    int ci = (int)c;
    return ai == bi + ci || ai == bi - ci || ai == ci + bi || ai == bi + ci || ai == ci + bi || ai == bi - ci || ai == ci - bi;
}

int main() {
    assert(any_int(3.01, 4, 7) == false);
    return 0;
}