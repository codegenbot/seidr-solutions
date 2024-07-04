#include <iostream>
#include <string>
#include <cmath>

int closest_integer(const std::string& value) {
    double num = std::stod(value);
    return static_cast<int>(std::round(num));
}

int main() {
    std::cout << closest_integer("0") << std::endl;
    std::cout << closest_integer("2.8") << std::endl;
    std::cout << closest_integer("-2.2") << std::endl;
    return 0;
}