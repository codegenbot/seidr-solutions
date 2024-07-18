#include <iostream>
#include <string>
#include <cmath>

int closest_integer(std::string value) {
    double num = std::stod(value);
    int rounded = num >= 0 ? std::floor(num + 0.5) : std::ceil(num - 0.5);
    return rounded;
}