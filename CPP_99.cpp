#include <iostream>
#include <cmath>

int closestInteger(double num) {
    return lround(num);
}

int main() {
    double num;
    std::cin >> num;
    std::cout << closestInteger(num);
    return 0;
}