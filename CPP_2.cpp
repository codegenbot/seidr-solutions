#include <iostream>
#include <cassert>
#include <cmath>

float truncate_number(float number) {
    return number - (int)number;
}

int main() {
    float number = truncate_number(123.456);
    assert(std::abs(number - 0.456) < 1e-4);
    return 0;
}