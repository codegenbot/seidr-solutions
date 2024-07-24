#include <cassert>

bool any_int(float a, float b, float c) {
    return (a + b == c || a + c == b || b + c == a);
}

int main() {
    assert(any_int(3.01, 4, 7) == false);
    return 0;
}