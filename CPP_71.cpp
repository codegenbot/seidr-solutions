#include <cmath>

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
    assert (abs(triangle_area(2, 2, 10) + 1) < 0.01);
    return 0;
}