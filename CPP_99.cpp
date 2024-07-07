```cpp
#include <iostream>
#include <cmath>
#include <string>

int closest_integer(double num) {
    if (num >= 0) {
        return static_cast<int>(std::ceil(num));
    } else {
        return static_cast<int>(std::floor(num));
    }
}

int main() {
    std::string input;
    std::cout << "Enter a number: ";
    getline(std::cin, input);
    int num = std::stoi(input); 
    std::cout << "The closest integer is: " << closest_integer((double)num) << std::endl;
    assert(closest_integer(0.5) == 0);
}