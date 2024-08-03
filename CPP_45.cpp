#include <iostream>
#include <cassert>
#include <cmath>

double triangle_area(double a, double h) {
    return 0.5 * a * h;
}

int main() {
    double base, height;
    std::cin >> base >> height;
    
    double area = triangle_area(base, height);
    std::cout << "Triangle area: " << area << std::endl;

    return 0;
}