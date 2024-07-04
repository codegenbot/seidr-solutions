#include <cmath>
#include <cassert>
#include <iostream>

float truncate_number(float number) {
    return number - floorf(number);
}

int main() {
    assert(fabs(truncate_number(123.456f) - 0.456f) < 1e-4);
    std::cout << "Test passed." << std::endl;
    return 0;
}