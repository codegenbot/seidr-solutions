#include <iostream>
#include <cassert>
#include <cmath>

int closest_integer(const std::string& value) {
    double num = std::stod(value);
    int rounded = static_cast<int>(round(num));
    if (std::abs(num - rounded) == 0.5) {
        return (num > 0) ? static_cast<int>(std::ceil(num)) : static_cast<int>(std::floor(num));
    } else {
        return static_cast<int>(num);
    }
}

int main() {
    assert(closest_integer("0") == 0);
}