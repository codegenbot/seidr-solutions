```
#include <iostream>
#include <cmath>
#include <cassert>
#include <string>

float triangle_area(float a, float b, float c) {
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    std::cout << "Enter sides of triangle: ";
    std::string side1Str, side2Str, side3Str;
    std::getline(std::cin, side1Str);
    std::getline(std::cin, side2Str);
    std::getline(std::cin, side3Str);

    float side1 = std::stof(side1Str);
    float side2 = std::stof(side2Str);
    float side3 = std::stof(side3Str);

    assert(std::abs(triangle_area(side1, side2, side3)) < 0.01);
    float result = triangle_area(side1, side2, side3);
    std::cout << "The area of the triangle is: " << static_cast<int>(result) << std::endl;
}