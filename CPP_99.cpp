#include <iostream>
#include <string>
#include <cmath>

int closest_integer(std::string value) {
    double num = std::stod(value);
    return static_cast<int>(std::round(num));
}

int main() {
    std::string value;
    std::cin >> value;
    std::cout << closest_integer(value) << std::endl;
    return 0;
}