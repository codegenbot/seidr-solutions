#include <iostream>
#include <cmath>
#include <cassert>

float triangle_area(float a, float b, float c) {
    float s = (a + b + c) / 2;
    return std::sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    std::cout << "Enter sides of triangle: ";
    float side1, side2, side3;
    std::cin >> side1 >> side2 >> side3;

    assert(std::abs(triangle_area(side1, side2, side3)) < 0.01);
    float result = triangle_area(side1, side2, side3);
    std::cout << "The area of the triangle is: " << result << std::endl;
    return 0;
}