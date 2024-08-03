#include <iostream>
#include <cmath>
#include <cassert>

int closest_integer(const std::string& value) {
    double num = std::stod(value);
    return num >= 0 ? std::floor(num + 0.5) : std::ceil(num - 0.5);
}

int main() {
    assert(closest_integer("0") == 0);
    // Add more test cases here
    return 0;
}