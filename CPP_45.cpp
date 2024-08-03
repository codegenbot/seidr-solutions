#include <iostream>
#include <cmath>

double triangle_area(double a, double h) {
    return 0.5 * a * h;
}

int main() {
    double a, h;
    std::cin >> a >> h;
    double area = triangle_area(a, h);
    std::cout << area << std::endl;
    return 0;
}