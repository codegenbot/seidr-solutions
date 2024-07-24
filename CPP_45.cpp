#include <iostream>
#include <cassert>
#include <cmath>

double triangle_area(double a, double h) {
    return 0.5 * a * h;
}

int main() {
    double a, h;
    std::cin >> a >> h;
    assert(a > 0 && h > 0);
    double area = triangle_area(a, h);
    std::cout << area << std::endl;
    return 0;
}