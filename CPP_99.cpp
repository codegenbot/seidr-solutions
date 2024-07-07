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
    std::string str;
    std::cout << "Enter a number: ";
    getline(std::cin, str);
    int num = std::stoi(str); 
    std::cout << "The closest integer is: " << closest_integer((double)num) << std::endl;
    assert(closest_integer(0.5) == 0);
}