
#include <cmath>
#include <cassert>

float triangle_area(float a, float b, float c) {
    if (a + b > c && a + c > b && b + c > a) {
        return std::round((a * b * std::sin(c)) / 2.0f);
    } else {
        return -1;
    }
}

int main() {
    assert (std::abs(triangle_area(2, 2, 10) +1)<0.01);
    return 0;
}