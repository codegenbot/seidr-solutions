#include <iostream>
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
    std::string input;
    std::cout << "Enter a floating-point number: ";
    std::cin >> input;
    
    int result = closest_integer(input);
    std::cout << "Closest integer is: " << result << std::endl;

    return 0;
}