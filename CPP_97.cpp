#include <iostream>
#include <cstdlib>
#include <cassert>

int multiply(int a, int b) {
    return abs((a % 10) * (b % 10));
}

int main() {
    assert(multiply(0, 0) == 0);
    // Add more test cases as needed
    return 0;
}