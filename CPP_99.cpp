#include <iostream>
#include <cmath>

int closest_integer(std::string value) {
    double num = std::stod(value);
    int integerPart = (int)num;
    if (std::abs(num - integerPart) < 0.5) {
        return (int)round(num);
    } else {
        return integerPart;
    }
}