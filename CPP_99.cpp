#include <iostream>
#include <cmath>
#include <cassert>

int closest_integer(double num) {
    return lround(num);
}

int main() {
    double num;
    std::cin >> num;
    std::cout << closest_integer(num);
    assert(closest_integer(0.0) == 0);
    return 0;
}
