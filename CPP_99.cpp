#include <iostream>
#include <cassert>
#include <string>
#include <cmath>

int closest_integer(const std::string& value) {
    double num = std::stod(value);
    return num >= 0 ? static_cast<int>(std::floor(num + 0.5)) : static_cast<int>(std::ceil(num - 0.5));
}

int main() {
    assert(closest_integer("0") == 0);
    return 0;
}