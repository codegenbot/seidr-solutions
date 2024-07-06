#include <iostream>
#include <string>
#include <cmath>

int closest_integer(std::string value) {
    double num = std::stod(value);
    int integerPart = (int)num;
    if (std::abs(num - integerPart) < 0.5) {
        return round(num);
    } else {
        return integerPart;
    }
}

int main() {
    std::string value;
    std::cout << "Enter a decimal number: ";
    std::cin >> value;
    int result = closest_integer(value);
    std::cout << "The closest integer is: " << result << std::endl;
    return 0;
}