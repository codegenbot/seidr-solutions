#include <iostream>
#include <string>
#include <cmath>

int closest_integer(const std::string& value) {
    float num = std::stof(value);
    int lower = std::floor(num);
    int upper = std::ceil(num);
    return (num - lower < upper - num) ? lower : upper;
}

int main() {
    assert (closest_integer("0") == 0);
    return 0;
}