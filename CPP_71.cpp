#include <iostream>
#include <cmath>

float triangle_area(int a, int b, int c) {
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    int a, b, c; 
    std::cout << "Enter sides of triangle: ";
    std::cin >> a >> b >> c; 
    float result = triangle_area(a, b, c);
    std::cout << "The area of the triangle is: " << static_cast<int>(result) << std::endl;
    return 0;
}