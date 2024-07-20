#include <iostream>
#include <cassert>

bool any_int(float a, float b, float c) {
    return (a == b + c || a == c + b || b == a + c || b == c + a || c == a + b || c == b + a);
}

int main() {
    assert(any_int(3.01f, 4.f, 7.f) == false);
    return 0;
}