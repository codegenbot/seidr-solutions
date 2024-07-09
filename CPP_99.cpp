#include <iostream>
#include <cmath>

int closest_integer(std::string value) {
    double num = std::stod(value);
    int intNum = static_cast<int>(std::round(num));
    if (num - intNum < 0) {
        return static_cast<int>(std::ceil(num));
    } else {
        return static_cast<int>(std::floor(num));
    }
}

int main() {
    assert(closest_integer("0") == 0);
}