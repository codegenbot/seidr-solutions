#include <iostream>
#include <cmath>

int main() {
    float a, h;
    std::cout << "Enter the length of side: ";
    std::cin >> a;
    std::cout << "Enter the height: ";
    std::cin >> h;
    std::cout << "The area of the triangle is: " << triangle_area(a, h) << std::endl;
    return 0;
}

float triangle_area(float a, float h) {
    return (a * h) / 2;
}