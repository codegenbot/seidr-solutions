#include <iostream>
#include <cmath>
#include <cassert>

int closest_integer(std::string value) {
    double num = std::stod(value);
    if (num < 0) {
        return static_cast<int>(std::floor(num + 0.5));
    } else {
        return static_cast<int>(std::ceil(num - 0.5));
    }
}