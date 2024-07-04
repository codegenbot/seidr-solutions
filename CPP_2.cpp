#include <cmath>
#include <cassert>
#include <iostream>

float truncate_number(float number) {
    return number - floor(number);
}

int main() {
    float input;
    std::cout << "Enter a number: ";
    std::cin >> input;

    float truncated = truncate_number(input);
    std::cout << "Truncated part: " << truncated << std::endl;

    return 0;
}