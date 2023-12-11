#include <iostream>
#include <cassert>
#include <cmath>

double triangle_area(double a, double h) {
    return (a * h) / 2;
}

int main(void) {
    assert(abs(triangle_area(10.0, 8.0) - 40.0) < 1e-4);
    std::cout << "The area of the triangle is: " << triangle_area(10.0, 8.0) << std::endl;
    return 0;
}