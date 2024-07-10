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
    std::string s1 = std::to_string(side1);
    std::string s2 = std::to_string(side2);
    std::string s3 = std::to_string(side3);

    std::cin >> side1 >> side2 >> side3;

    int a = side1;
    int b = side2;
    int c = side3;

    assert(std::abs(triangle_area(a, b, c)) < 0.01);
    float result = triangle_area(a, b, c);
    std::cout << "The area of the triangle is: " << static_cast<int>(result) << std::endl;
}