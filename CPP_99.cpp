#include <iostream>
#include <cmath>
#include <cassert>

double findClosestInt(const std::string& value) {
    double num = std::stod(value);
    int closestInt = std::round(num);
    if (std::abs(num - closestInt) < 0.0001) {
        closestInt = std::round(num);
    } else if (std::abs(num - closestInt + 1) < 0.0001) {
        closestInt = std::ceil(num);
    } else if (std::abs(num - closestInt - 1) < 0.0001) {
        closestInt = std::floor(num);
    }
    return closestInt;
}

int main() {
    assert(findClosestInt("3.6") == 4);
    assert(findClosestInt("2.4") == 2);
    assert(findClosestInt("5.5") == 6);

    return 0;
}