#include <iostream>
#include <cmath>
#include <cassert>

int closest_integer(std::string value) {
    double num = std::stod(value);
    int result = (num > 0) ? std::floor(num + 0.5) : std::ceil(num - 0.5);
    return result;
}

int main() {
    assert(closest_integer("0") == 0);

    return 0;
}