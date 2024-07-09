```c++
#include <cmath>
#include <cassert>

double triangle_area(double a, double b, double c) {
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    assert(abs(triangle_area(2, 2, 10) + 1) < 0.01);
    return 0;
}