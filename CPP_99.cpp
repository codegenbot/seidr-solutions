#include <iostream>
#include <cmath>

int closest_integer(std::string value) {
    double num = stod(value);
    int rounded = round(num);
    if (std::abs(num - rounded) == 0.5) {
        return num > 0 ? ceil(num) : floor(num);
    } else {
        return rounded;
    }
}