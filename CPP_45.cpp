#include <iostream>
#include <cassert>
#include <cmath>

double triangle_area(double a, double h) {
    return 0.5 * a * h;
}

int main() {
    double base, height;
    std::cout << "Enter base length and height of the triangle: ";
    std::cin >> base >> height;

    double area = triangle_area(base, height);
    std::cout << "Area of the triangle: " << area << std::endl;

    return 0;
}