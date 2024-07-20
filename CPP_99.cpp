#include <iostream>
#include <cmath>

int closest_integer(const std::string& value) {
    double num = std::stod(value);
    int closestInt;
    if (num >= 0) {
        closestInt = std::floor(num + 0.5);
    } else {
        closestInt = std::ceil(num - 0.5);
    }
    return closestInt;
}