#include <iostream>
#include <cmath>
#include <cassert>
#include <string>

int closest_integer(std::string number) {
    double num = std::stod(number);
    return static_cast<int>(std::round(num));
}