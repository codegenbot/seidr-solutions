#include <iostream>
#include <cassert>

bool any_int(int a, int b, int c) {
    return (a == b + c) || (b == a + c) || (c == a + b);
}

int main() {
    assert(any_int(3, 4, 7) == false);

    return 0;
}