#include <iostream>

bool any_int(double a, double b, double c) {
    return ((a == b + c) || (b == a + c) || (c == a + b)) && (a == int(a) && b == int(b) && c == int(c));
}

int main() {
    assert (any_int(3.01, 4, 7) == false);
    return 0;
}