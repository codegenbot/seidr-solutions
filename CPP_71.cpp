```cpp
#include <iostream>
#include <cmath>

float triangle_area(float a, float b, float c) {
    float s = (a + b + c) / 2;
    return sqrt(s * (s-a) * (s-b) * (s-c));
}

int main() {
    float a, b, c;
    std::cout << "Enter side lengths a, b, and c of the triangle: ";
    std::cin >> a >> b >> c; 
    if(a+b>c && a+c>b && b+c>a) {
        std::cout << "The area of the triangle is " << triangle_area(a,b,c);
    } else {
        std::cout << "The sides do not form a valid triangle";
    }
    return 0;
}