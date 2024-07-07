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
    double num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::string input;
    getline(std::cin, input);
    std::cout << "The closest integer is: " << closest_integer(num) << std::endl;
    assert(closest_integer(0.5) == 0);
}