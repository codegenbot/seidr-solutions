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
    // Accept user input
    std::string input;
    std::cout << "Enter a number: ";
    std::cin >> input;

    // Call the function and output the result
    std::cout << "Closest integer to " << input << " is: " << closest_integer(input) << std::endl;

    return 0;
}