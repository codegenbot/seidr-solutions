#include <iostream>
#include <cassert>
#include <cmath>

int closest_integer(std::string value) {
    double num = std::stod(value);
    int intPart = (int)num;
    double decimalPart = num - intPart;
    if (decimalPart < 0.5) {
        return std::floor(num);
    } else {
        if (num > 0) {
            return std::ceil(num);
        } else {
            return std::floor(num);
        }
    }
}