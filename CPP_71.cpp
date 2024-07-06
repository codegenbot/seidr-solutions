```cpp
#include <iostream>
#include <cmath>

float triangle_area(float a, float b, float c) {
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        float s = (a + b + c) / 2;
        return round((sqrt(s * (s - a) * (s - b) * (s - c))) * 100.0) / 100.0;
    } else {
        return -1.0f;
    }
}

int main() {
    float a, b, c;
    std::cout << "Enter the lengths of the sides: ";
    std::cin >> a >> b >> c;
    float result = triangle_area(a, b, c);
    if(result == -1.0f) 
        std::cout << "Invalid input. The values don't form a valid triangle." << std::endl; 
    else
        std::cout << "The area of the triangle is: " << result << std::endl;
    return 0;
}