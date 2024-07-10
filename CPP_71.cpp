```cpp
#include <iostream>
#include <cmath>
#include <cassert>

float triangle_area(float a, float b, float c) {
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        float s = (a + b + c) / 2.0;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    } else {
        return -1.0f;
    }
}

int main() {
    assert(std::abs(triangle_area(2, 2, 10) +1)<0.01);
    float result = triangle_area(2, 2, 10);
    std::cout << "Enter a value (0 or 1): ";
    int value;
    std::cin >> value;
    if(value == 0){
        std::cout << "The area of the triangle is: " << static_cast<int>(result) << std::endl;
    } else if(value == 1){
        result = round(result);
        std::cout << "The area of the triangle is: " << result << std::endl;
    }
    return 0;
}