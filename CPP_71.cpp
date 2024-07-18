#include <cmath>
#include <cassert>

float triangle_area(float a, float b, float c) {
    if(a + b > c && b + c > a && a + c > b) {
        float s = (a + b + c) / 2;
        return round(sqrt(s * (s - a) * (s - b) * (s - c)) * 100) / 100;
    } else {
        return -1;
    }
}

int main() {
    assert (std::abs(triangle_area(2, 2, 10) + 1) < 0.01);
}