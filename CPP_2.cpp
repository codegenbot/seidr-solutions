#include <cmath>
#include <cassert>
#include <iostream>

float truncate_number(float number) {
    return number - floor(number);
}

int main() {
    assert(fabs(truncate_number(123.456) - 0.456) < 1e-4);
    std::cout << "Test passed." << std::endl;
    return 0;
}