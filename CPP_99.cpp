#include <iostream>
#include <cmath>

int closest_integer(const std::string& value) {
    double num = std::stod(value);
    int lower = std::floor(num);
    int upper = std::ceil(num);
    return (std::abs(num - lower) < std::abs(num - upper)) ? lower : upper;
}

int main() {
    assert(closest_integer("0") == 0);
    return 0;
}