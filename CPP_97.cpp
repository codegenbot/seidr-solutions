#include <iostream>
#include <cassert>
#include <cmath>

int multiply(int a, int b) {
    return (a % 10) * (b % 10);
}

int main() {
    assert(multiply(0, 0) == 0);

    // Add more test cases here if needed

    return 0;
}