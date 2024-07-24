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
    
    float result = triangle_area(a, b, c);

    if (result == -1) {
        std::cout << "Invalid triangle sides";
    } else {
        std::cout << "Triangle area: " << result;
    }

    return 0;
}