
#include <iostream>
#include <cmath>

float triangle_area(float a, float h) {
    return (a * h) / 2;
}

int main() {
    float area = triangle_area(5, 3);
    std::cout << "Area of the triangle: " << area << std::endl;
    return 0;
}