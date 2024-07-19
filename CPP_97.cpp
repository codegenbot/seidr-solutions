#include <iostream>
#include <cassert>
#include <cmath>

int multiply(int a, int b) {
    return std::abs(((a % 10) * (b % 10)) % 10);
}

int main() {
    assert (multiply(0, 0) == 0);

    return 0;
}