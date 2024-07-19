#include <iostream>
#include <cassert>
#include <cmath>

double triangle_area(double a, double h) {
    return 0.5 * a * h;
}

int main() {
    double base, height;
    std::cin >> base >> height;
    
    double result = triangle_area(base, height);
    std::cout << "Triangle Area: " << result << std::endl;

    return 0;
}