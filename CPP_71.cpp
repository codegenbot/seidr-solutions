#include <cmath>
#include <cassert>

float triangle_area(float a, float b, float c) {
    float s = (a + b + c) / 2;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        return roundf(area * 100) / 100;
    } else {
        return -1;
    }
}

int main() {
    assert(triangle_area(3, 4, 5) == 6);
    assert(triangle_area(1, 2, 3) == -1);
    
    return 0;
}