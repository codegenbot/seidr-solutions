#include <cassert>

bool any_int(float a, float b, float c) {
    int ai = a, bi = b, ci = c;
    return (ai == bi + ci) || (bi == ai + ci) || (ci == ai + bi);
}

int main() {
    assert(any_int(3.01, 4, 7) == false); 
    return 0;
}