#include <iostream>
#include <cassert>
#include <cmath>

int closest_integer(const std::string &input) {
    double num = std::stod(input);
    return static_cast<int>(std::round(num));
}

int main() {
    assert(closest_integer("0") == 0);
    assert(closest_integer("3.5") == 4);
    assert(closest_integer("-2.7") == -3);
    assert(closest_integer("10.2") == 10);
    assert(closest_integer("-7.8") == -8);

    return 0;
}