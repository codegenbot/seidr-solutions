```cpp
#include <iostream>
#include <cmath>

float triangle_area(float a, float b, float c) {
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        float s = (a + b + c) / 2.0;
        return round((s * (s - a) * (s - b) * (s - c)) * 100.0) / 100.0;
    } else {
        return 0.0f; 
    }
}

int main() {
    float a, b, c;
    std::cout << "Enter side A: ";
    std::cin >> a;
    std::cout << "Enter side B: ";
    std::cin >> b;
    std::cout << "Enter side C: ";
    std::cin >> c;
    std::cout << "The area of the triangle is: " << triangle_area(a, b, c) << std::endl;
    return 0;
}