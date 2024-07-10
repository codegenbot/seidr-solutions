#include <iostream>
#include <cmath>
#include <cassert>
#include <string>

float triangle_area(int a, int b, int c) {
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    std::cout << "Enter sides of triangle: ";
    std::string s1, s2, s3;
    std::cin >> s1 >> s2 >> s3;

    int a = std::stoi(s1);
    int b = std::stoi(s2);
    int c = std::stoi(s3);

    assert(std::abs(triangle_area(a, b, c)) < 0.01);
    float result = triangle_area(a, b, c);
    std::cout << "The area of the triangle is: " << static_cast<int>(result) << std::endl;
}