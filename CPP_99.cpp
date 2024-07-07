#include <iostream>
#include <cmath>
#include <cassert>

int closest_integer(double num) {
    if (num >= 0) {
        return static_cast<int>(std::ceil(num));
    } else {
        return static_cast<int>(std::floor(num));
    }
}

int test_closest_integer() {
    assert(closest_integer(0.0) == 0);
    std::cout << "The closest integer is: " << static_cast<int>(closest_integer((double)5)) << std::endl;
    return 0;
}