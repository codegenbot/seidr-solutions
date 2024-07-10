#include <iostream>
#include <cassert>

bool any_int(double a, int b, int c) {
    if (static_cast<int>(a) == b + c || static_cast<int>(b) == a + c || static_cast<int>(c) == a + b)
        return true;
    return false;
}

int main() {
    assert(any_int(3.01, 4, 7) == false);
    return 0;
}