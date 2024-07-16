#include <iostream>
#include <cmath>
#include <cassert>

float triangle_area(float a, float b, float c);

int main() {
    float a, b, c;
    std::cin >> a >> b >> c;
    std::cout << triangle_area(a, b, c) << std::endl;
    return 0;
}

float triangle_area(float a, float b, float c) {
    float s = (a + b + c) / 2;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    return (a + b > c && a + c > b && b + c > a) ? round(area * 100) / 100 : -1;
}