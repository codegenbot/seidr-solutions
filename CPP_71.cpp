#include <iostream>
#include <cmath>

float triangle_area(float a, float b, float c) {
    if (a + b > c && a + c > b && b + c > a) {
        float s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    } else {
        return -1.0f;
    }
}

int main() {
    float side1, side2, side3;
    std::cout << "Enter the lengths of three sides: ";
    std::cin >> side1 >> side2 >> side3;
    if (triangle_area(side1, side2, side3) == -1.0f) {
        std::cout << "Not a triangle.";
    } else {
        std::cout << "The area is: " << triangle_area(side1, side2, side3);
    }
    return 0;
}