#include <iostream>
#include <cassert>
#include <cmath>

double triangle_area(double a, double h) {
    return 0.5 * a * h;
}

int main() {
    double a, h;
    std::cout << "Enter the base and height of the triangle: ";
    std::cin >> a >> h;

    double area = triangle_area(a, h);
    std::cout << "The area of the triangle is: " << area << std::endl;

    return 0;
}