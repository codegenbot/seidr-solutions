#include <iostream>
#include <cmath>
#include <cassert>

int closestInteger(double num) {
    return lround(num);
}

int main() {
    double num;
    std::cin >> num;
    std::cout << closestInteger(num);
    assert(closestInteger(0.0) == 0);
    return 0;
}