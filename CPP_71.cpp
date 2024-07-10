```cpp
#include <iostream>
#include <cmath>
#include <cassert>

float triangle_area(int a, int b, int c) {
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    std::cout << "Enter side 1: ";
    int a;
    std::cin >> a;
    std::cout << "Enter side 2: ";
    int b;
    std::cin >> b;
    std::cout << "Enter side 3: ";
    int c;
    std::cin >> c;

    assert(std::abs(triangle_area(a, b, c)) < 0.01);
    float result = triangle_area(a, b, c);
    std::cout << "The area of the triangle is: " << static_cast<int>(result) << std::endl;
}