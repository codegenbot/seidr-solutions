```
#include <iostream>
#include <cmath>

float triangle_area(float a, float b, float c) {
    float s = (a + b + c) / 2;
    if ((a + b <= c) || (a + c <= b) || (b + c <= a))
        return 0; // invalid input
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
    if (result == 0)
        std::cout << "The given sides do not form a valid triangle." << std::endl;
    else
        std::cout << "The area of the triangle is: " << result << std::endl;
    return 0;
}