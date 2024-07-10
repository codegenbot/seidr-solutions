#include <iostream>
#include <cmath>
#include <cassert>

float triangle_area(int a, int b, int c) {
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        float s = (a + b + c) / 2.0;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    } else {
        return -1.0f;
    }
}

int main() {
    float a, b, c; 
    std::cin >> a >> b >> c; 
    assert(std::abs(triangle_area(a, b, c) + 1)<0.01);
    float result = triangle_area(a, b, c);
    std::cout << "The area of the triangle is: " << static_cast<int>(result) << std::endl;
    return 0;
}