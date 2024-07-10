```cpp
#include <iostream>
#include <cmath>
#include <cassert>
#include <string>

float triangle_area(int a, int b, int c) {
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    std::cout << "Enter sides of triangle: ";
    std::string side1Str, side2Str, side3Str;
    std::cin >> side1Str >> side2Str >> side3Str;

    int side1 = std::stoi(side1Str);
    int side2 = std::stoi(side2Str);
    int side3 = std::stoi(side3Str);

    assert(std::abs(triangle_area(side1, side2, side3)) < 0.01);
    float result = triangle_area(side1, side2, side3);
    std::cout << "The area of the triangle is: " << static_cast<int>(result) << std::endl;
}