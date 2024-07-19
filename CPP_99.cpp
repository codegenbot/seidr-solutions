#include <iostream>
#include <cmath>

int closest_integer(std::string value) {
    float num = stof(value);
    int lower = floor(num);
    int upper = ceil(num);
    return abs(num - lower) < abs(num - upper) ? lower : upper;
}

int main() {
    assert (closest_integer("0") == 0);
    return 0;
}