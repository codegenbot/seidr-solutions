#include <iostream>
#include <cassert>
#include <cmath>

int closest_integer(std::string value) {
    double num = std::stod(value);
    int lower = std::floor(num);
    int upper = std::ceil(num);
    return (num - lower < upper - num) ? lower : upper;
}

int main() {
    assert(closest_integer("0") == 0);
    // Add more test cases here
    return 0;
}