```cpp
#include <iostream>
#include <cmath>
#include <cassert>

int closest_integer(double num) {
    if (num >= 0) {
        return static_cast<int>(std::ceil(num));
    } else {
        return static_cast<int>(std::floor(num));
    }
}

int main() {
    std::cout << "Enter a number: ";
    char input[256];
    std::cin >> input;
    double num = std::stod(input); 

    int closest = closest_integer(num);
    std::cout << "The closest integer is: " << closest << std::endl;

    return 0; 
}