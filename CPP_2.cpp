#include <iostream>
#include <cmath>

float truncate_number(float number) {
    float integer_part = floor(number);
    float decimal_part = number - integer_part;
    return decimal_part;
}

int main() {
    float number;
    std::cout << "Enter a positive floating point number: ";
    std::cin >> number;
    std::cout << "Decimal part of the number: " << truncate_number(number) << std::endl;
    return 0;
}