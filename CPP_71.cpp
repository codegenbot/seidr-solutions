#include <iostream>
#include <cmath>

float triangle_area(float a, float b, float c) {
    if (a + b > c && a + c > b && b + c > a) {
        float s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    } else {
        return -1;
    }
}

void main() {
    float a, b, c;
    std::cout << "Enter the sides of the triangle (a, b, c): ";
    std::cin >> a >> b >> c;
    
    float area = triangle_area(a, b, c);
    if (area != -1) {
        std::cout << "Area of the triangle is: " << area << std::endl;
    } else {
        std::cout << "Invalid triangle sides entered." << std::endl;
    }
}