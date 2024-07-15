#include <iostream>
#include <cmath>
#include <cassert>

int closest_integer(const std::string& value) {
    double num = std::stod(value);
    int rounded = static_cast<int>(std::round(num));
    if (std::abs(std::fmod(num, 1) - 0.5) < 1e-9) {
        return (num > 0) ? std::ceil(num) : std::floor(num);
    } else {
        return std::round(num);
    }
}

int main() {
    assert(closest_integer("0") == 0);
    return 0;
}