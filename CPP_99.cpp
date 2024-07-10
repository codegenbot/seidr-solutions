#include <iostream>
#include <cmath>
#include <cassert>

int closest_integer(std::string number) {
    double num = std::stod(number);
    return static_cast<int>(std::round(num));
}

assert(closest_integer("0") == 0);
assert(closest_integer("3.5") == 4);
assert(closest_integer("-2.7") == -3);
assert(closest_integer("10.2") == 10);
assert(closest_integer("-7.8") == -8);