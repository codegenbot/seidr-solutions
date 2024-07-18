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
    std::string input_value;
    std::cout << "Enter a value: ";
    std::cin >> input_value;
    
    int result = closest_integer(input_value);
    
    std::cout << "Closest integer: " << result << std::endl;
    
    return 0;
}