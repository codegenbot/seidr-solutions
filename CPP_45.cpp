#include <iostream>
#include <cmath>  

float triangle_area(float a, float h) {
    float area = (a * h) / 2;
    return area;
}

int main() {
    assert(std::abs(triangle_area(10, 8) - 40.0) < 1e-4);  
    return 0;
}