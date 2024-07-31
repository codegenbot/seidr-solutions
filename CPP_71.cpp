#include <iostream>
#include <cmath>

float triangle_area(float a, float b, float c) {
    float s = (a + b + c) / 2;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    if (a + b > c && a + c > b && b + c > a) {
        return round(area * 100) / 100;
    } else {
        return -1;
    }
}

int main() {
    float a, b, c;
    std::cout << "Enter the three sides of the triangle: ";
    std::cin >> a >> b >> c;
    
    std::cout << "Area of the triangle is: " << triangle_area(a, b, c) << std::endl;
    
    return 0;
}