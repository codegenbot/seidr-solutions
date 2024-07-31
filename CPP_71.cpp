#include <iostream>
#include <cmath>
#include <cassert>

float triangle_area(float a, float b, float c) {
    if (a + b > c && a + c > b && b + c > a) {
        float s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    } else {
        return -1;
    }
}

int main() {
    float a, b, c;
    std::cout << "Enter the lengths of the three sides of the triangle: ";
    std::cin >> a >> b >> c;
    
    float area = triangle_area(a, b, c);
    if (area != -1) {
        std::cout << "Area of the triangle: " << area << std::endl;
    } else {
        std::cout << "Invalid triangle sides - cannot form a triangle." << std::endl;
    }
    
    return 0;
}