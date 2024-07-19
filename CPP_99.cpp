#include <iostream>
#include <string>
#include <cmath>

int closest_integer(std::string value) {
    double num = std::stod(value);
    int intNum = std::round(num);
    if (num - intNum > 0.5) {
        return std::ceil(num);
    } else if (num - intNum < -0.5) {
        return std::floor(num);
    } else {
        if (num >= 0) {
            return std::ceil(num);
        } else {
            return std::floor(num);
        }
    }
}