#include <iostream>
#include <cmath>
#include <cassert>

double triangle_area(double a, double h) {
    return 0.5 * a * h;
}

int main() {
    double a, h;
    std::cin >> a >> h;
    std::cout << triangle_area(a, h) << std::endl;
    return 0;
}