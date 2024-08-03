#include <iostream>
#include <cassert>
#include <cmath>

double triangle_area(double a, double h) {
    return 0.5 * a * h;
}

int main() {
    double base, height;
    std::cin >> base >> height;
    
    std::cout << triangle_area(base, height) << std::endl;

    return 0;
}