#include <iostream>
#include <cassert>
#include <cstdlib>

int multiply(int a, int b) {
    return abs((a % 10) * (b % 10));
}

int main() {
    assert(multiply(0, 0) == 0);

    return 0;
}