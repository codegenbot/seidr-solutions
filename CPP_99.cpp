#include <iostream>
#include <cmath>

int closest_integer(std::string value) {
    double num = std::stod(value);
    int rounded = static_cast<int>(std::round(num));
    return (num - rounded >= 0.5) ? std::ceil(num) : std::floor(num);
}