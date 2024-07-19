```cpp
#include <cmath>
#include <cassert>
#include <iostream>

float triangle_area(float a, float b, float c) {
    if (a + b > c && a + c > b && b + c > a) {
        float s = (a + b + c) / 2;
        return std::round((std::sqrt(s * (s - a) * (s - b) * (s - c))) * 100.0) / 100.0;
    } else {
        return -1.0f;
    }
}

int main() { 
    assert(std::abs(triangle_area(2, 2, 10) +1)<0.01);
    float a, b, c;
    std::cout << "Enter side lengths a, b, and c of the triangle: ";
    std::cin >> a >> b >> c;
    if(a+b>c && a+c>b && b+c>a)
        std::cout << "The area of the triangle is " << triangle_area(a,b,c);
    else
        std::cout << "The sides do not form a valid triangle";
    std::cout << "a = " << std::to_string(a) << ", b = " << std::to_string(b) << ", c = " << std::to_string(c);
    return 0;
}