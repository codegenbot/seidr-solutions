#include <iostream>
#include <cmath>

float triangle_area(float a, float h) {
    return 0.5 * a * h;
}

int main() {
    float a, h;
    std::cout << "Enter the length of the side: ";
    std::cin >> a;
    std::cout << "Enter the height: ";
    std::cin >> h;
    float area = triangle_area(a, h);
    std::cout << "The area of the triangle is: " << std::fixed << std::setprecision(2) << area << std::endl;
    return 0;
}