#include <iostream>
#include <string>
#include <cmath>
#include <cassert>

int closest_integer(std::string value) {
    double num = std::stod(value);
    int lower = std::floor(num);
    int upper = std::ceil(num);
    if (num - lower < upper - num) {
        return lower;
    } else {
        return upper;
    }
}

int main() {
    assert (closest_integer("0") == 0);

    return 0;
}