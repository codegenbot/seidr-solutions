#include <iostream>
#include <cmath>
#include <cassert>

int closest_integer(double num) {
    return lround(num);
}

int main() {
    double num;
    std::cin >> num;
    int result = closest_integer(num);
    std::cout << result;
    assert (closest_integer(num) == result);
    return 0;
}