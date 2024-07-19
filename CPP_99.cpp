#include <iostream>
#include <string>
#include <cmath>

int closest_integer(std::string value) {
    double num = std::stod(value);
    int closestInt = std::round(num);
    if (num - closestInt == 0.5 || num - closestInt == -0.5) {
        closestInt = (num > 0) ? std::ceil(num) : std::floor(num);
    }
    return closestInt;
}

int main() {
    std::string userInput;
    std::cout << "Enter a number: ";
    std::cin >> userInput;
    std::cout << "Closest integer: " << closest_integer(userInput) << std::endl;
    return 0;
}