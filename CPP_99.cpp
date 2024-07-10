#include <iostream>
#include <cassert>
#include <cmath>

int closest_integer(const std::string& num) {
    double value = std::stod(num);
    int closestInt = std::round(value);
    if (value - closestInt == 0.5 || value - closestInt == -0.5) {
        closestInt += (value > 0) ? 1 : -1;
    }
    return closestInt;
}

int main() {
    assert(closest_integer("0") == 0);
    
    return 0;
}