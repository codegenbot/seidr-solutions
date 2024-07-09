#include <cmath>
#include <cassert>

float triangle_area(int a, int b, int c) {
    if(a + b > c && a + c > b && b + c > a) {
        float s = (a + b + c) / 2;
        float area = sqrt(s * (s - a) * (s - b) * (s - c));
        return round(area * 100) / 100;
    } else {
        return -1;
    }
}

int main() {
    assert (abs(triangle_area(2, 2, 10) + 1) < 0.01);
    return 0;
}