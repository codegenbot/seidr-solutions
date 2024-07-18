#include <iostream>
#include <cmath>

int closest_integer(std::string value) {
    double num = std::stod(value);
    int closest = std::round(num);
    
    if (num - closest == 0.5) {
        closest = std::ceil(num);
    } else if (num - closest == -0.5) {
        closest = std::floor(num);
    }
    
    return closest;
}

int main() {
    std::string input;
    std::cout << "Enter a decimal number: ";
    std::cin >> input;
    
    int result = closest_integer(input);
    std::cout << "Closest integer: " << result << std::endl;
    
    return 0;
}