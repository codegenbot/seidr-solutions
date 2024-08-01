#include <iostream>
#include <cassert>
#include <cmath>

int closest_integer(const std::string &value) {
    double num = std::stod(value);
    int intPart = static_cast<int>(num);
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

int main() {
    assert(closest_integer("0") == 0);
    return 0;
}