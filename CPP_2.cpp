
#include <iostream>
#include <cassert>
#include <cmath>

float truncate_number(float number) {
    return number - (int)number;
}

int main() {
    assert(std::abs(truncate_number(123.456) - 0.456) < 1e-4);
    float input;
    std::cout << "Enter a number: ";
    std::cin >> input;
    std::cout << "Truncated number: " << truncate_number(input) << std::endl;
    return 0;
}
