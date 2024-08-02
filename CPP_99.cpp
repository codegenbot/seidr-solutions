#include <iostream>
#include <string>
#include <cassert>
#include <cmath>

int closest_integer(const std::string& value);

int main() {
    assert(closest_integer("0") == 0);
    return 0;
}

int closest_integer(const std::string& value) {
    double num = std::stod(value);
    int closestInt = std::round(num);
    if (std::fabs(num - closestInt) == 0.5) {
        closestInt = (num - closestInt) > 0 ? std::ceil(num) : std::floor(num);
    }
    return closestInt;
}