#include <iostream>
#include <cmath>

int closest_integer(std::string value) {
    float num = std::stof(value);
    int lower = std::floor(num);
    int higher = std::ceil(num);
    return std::abs(num - lower) < std::abs(num - higher) ? lower : higher;
}

int main() {
    assert (closest_integer("0") == 0);
    return 0;
}