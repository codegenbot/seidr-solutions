#include <iostream>
#include <cassert>
#include <cmath>

double triangle_area(double a, double h) {
    return 0.5 * a * h;
}

int main() {
    double side_length, height;
    std::cin >> side_length >> height;
    
    double area = triangle_area(side_length, height);
    std::cout << area << std::endl;

    return 0;
}