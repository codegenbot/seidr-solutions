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
    assert(closestInteger(0.0) == 0); // Add this line to fix the issue
    return 0;
}