#include <iostream>
#include <string>
#include <cmath>
#include <cassert>

double findClosestInt(const std::string& value) {
    double num = std::stod(value);
    int closestInt = std::round(num);
    if (std::abs(num - closestInt) < 0.0001) {
        return closestInt;
    } else if (num - closestInt == 0.5) {
        return std::ceil(num);
    } else if (num - closestInt == -0.5) {
        return std::floor(num);
    }
    return closestInt;
}

int main() {
    assert(findClosestInt("3.5") == 4);
    assert(findClosestInt("4.4") == 4);
    assert(findClosestInt("5.6") == 6);
    
    return 0;
}