#include <iostream>
#include <cmath>
#include <cassert>

double findClosestInt(const std::string& value) {
    double num = std::stod(value);
    int closestInt = std::round(num);
    if (std::abs(num - closestInt) < 0.00001) {
        return closestInt;
    } else if (num - closestInt == 0.5) {
        closestInt = std::ceil(num);
    } else if (num - closestInt == -0.5) {
        closestInt = std::floor(num);
    }
    return closestInt;
}

int main() {
    assert(findClosestInt("3.6") == 4);
    assert(findClosestInt("2.5") == 3);
    assert(findClosestInt("6.2") == 6);
    
    return 0;
}