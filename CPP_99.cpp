#include <iostream>
#include <string>
#include <cmath>

int closest_integer(std::string value) {
    double num = std::stod(value);
    return static_cast<int>(std::round(num));
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << closest_integer(input) << std::endl;
    return 0;
}