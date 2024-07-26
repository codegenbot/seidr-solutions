#include <iostream>
#include <cmath>

int closest_integer(std::string value) {
    double num = std::stod(value);
    int lower = std::floor(num);
    int upper = std::ceil(num);
    return (num - lower < upper - num) ? lower : upper;
}

int main() {
    assert(closest_integer("0") == 0);
    // More test cases can be added here
    return 0;
}