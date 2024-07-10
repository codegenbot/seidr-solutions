```cpp
#include <iostream>
#include <cmath>
#include <cassert>

float triangle_area(int a, int b, int c) {
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    int a, b, c;
    float result;

    std::cout << "Enter sides of triangle: ";
    std::cin >> a >> std::ws >> b >> std::ws >> c;

    assert(std::abs(triangle_area(a, b, c)) < 0.01);
    result = triangle_area(a, b, c);

    std::cout << "The area of the triangle is: " << static_cast<int>(result) << std::endl;
    return 0;
}