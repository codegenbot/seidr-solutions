#include <iostream>
#include <string>
#include <cmath>

int closest_integer(std::string value) {
    double num = std::stod(value);
    int rounded = static_cast<int>(std::round(num));
    if (num - rounded == 0.5) {
        return (num > 0) ? static_cast<int>(std::ceil(num)) : static_cast<int>(std::floor(num));
    } else {
        return rounded;
    }
}