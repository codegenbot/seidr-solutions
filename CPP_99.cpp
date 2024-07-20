#include <iostream>
#include <string>
#include <cmath>

int closest_integer(const std::string& value) {
    double num = std::stod(value);
    int lower = std::floor(num);
    int upper = std::ceil(num);
    return (std::abs(num - lower) < std::abs(num - upper)) ? lower : upper;
}

int main() {
    std::string input;
    std::cout << "Enter a number: ";
    std::cin >> input;

    int result = closest_integer(input);
    std::cout << "Closest integer: " << result << std::endl;

    return 0;
}