```cpp
#include <iostream>
#include <cmath>
#include <cassert>

float triangle_area(int a, int b, int c) {
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    std::cout << "Enter sides of triangle: ";
    int side1, side2, side3;
    std::cin >> side1 >> side2 >> side3;

    float result = triangle_area(side1, side2, side3);
    std::cout << "The area of the triangle is: " << static_cast<int>(result) << std::endl;
}