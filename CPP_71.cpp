#include <iostream>
#include <cmath>
#include <cassert>

float triangle_area(float a, float b, float c) {
    assert(a > 0 && b > 0 && c > 0);
    
    if(a + b > c && a + c > b && b + c > a) {
        float s = (a + b + c) / 2;
        float area = sqrt(s * (s - a) * (s - b) * (s - c));
        return round(area * 100) / 100;
    } else {
        return -1;
    }
}

int main() {
    float a, b, c;
    std::cin >> a >> b >> c;
    
    std::cout << triangle_area(a, b, c) << std::endl;
    
    return 0;
}