#include <iostream>
#include <cmath>
#include <cassert>

int closest_integer(double input_num) {
    return lround(input_num);
}

int main() {
    double input_num;
    std::cin >> input_num;
    std::cout << closest_integer(input_num);
    assert(closest_integer(0.0) == 0);
    assert(closest_integer(0) == 0); // Fix: Passed integer instead of double
    return 0;
}