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

    if (!std::abs(triangle_area(side1, side2, side3)) < 0.01) {
        std::cerr << "Invalid input. Please check the sides of the triangle." << std::endl;
        return 1;
    }
    float result = triangle_area(side1, side2, side3);
    std::cout << "The area of the triangle is: " << result << std::endl;
    return 0;
}