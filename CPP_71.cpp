#include <iostream>
#include <cmath>

float triangle_area(float a, float b, float c) {
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        float s = (a + b + c) / 2.0;
        return std::round((std::sqrt(s * (s - a) * (s - b) * (s - c))) * 100.0) / 100.0;
    } else {
        return -1.0;
    }
}

int main() {
    float side1, side2, side3;

    std::cout << "Enter three sides of a triangle: ";
    std::cin >> side1 >> side2 >> side3;

    if (triangle_area(side1, side2, side3) == -1.0) {
        std::cout << "Not a valid triangle.";
    } else {
        std::cout << "The area of the triangle is: " << triangle_area(side1, side2, side3);
    }

    return 0;
}