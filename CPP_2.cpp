#include <iostream>
#include <cmath>

float truncate_number(float number) {
    return number - floor(number);
}

int main() {
    float number;
    std::cout << "Enter a positive floating point number: ";
    std::cin >> number;
    float result = truncate_number(number);
    std::cout << "Decimal part of the number: " << result << std::endl;
    return 0;
}