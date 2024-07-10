```cpp
#include <iostream>
#include <cmath>
#include <cassert>

float triangle_area(float a, float b, float c) {
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    std::cout << "Enter sides of triangle: ";
    std::string input;
    std::getline(std::cin, input);
    float side1 = std::stof(input), side2 = std::stof(input.substr(input.find(' ') + 1)), side3 = std::stof(input.substr(input.rfind(' ') + 1));
    
    assert(std::abs(triangle_area(side1, side2, side3)) < 0.01);
    float result = triangle_area(side1, side2, side3);
    std::cout << "The area of the triangle is: " << static_cast<int>(result) << std::endl;
}