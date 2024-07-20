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
    std::cin >> a >> b >> c;
    
    float area = triangle_area(a, b, c);
    
    if (area == -1) {
        std::cout << "Triangle with sides " << a << ", " << b << ", " << c << " does not form a valid triangle.\n";
    } else {
        std::cout << "Area of the triangle with sides " << a << ", " << b << ", " << c << " is " << area << "\n";
    }
    
    return 0;
}