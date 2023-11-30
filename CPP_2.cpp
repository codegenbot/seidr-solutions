#include <iostream>

float truncate_number(float number) {
    int integer_part = (int)number;
    float decimal_part = number - integer_part;
    return decimal_part;
}

int main() {
    float number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    std::cout << "Decimal part: " << truncate_number(number) << std::endl;
    return 0;
}