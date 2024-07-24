#include <iostream>
#include <cmath>

double triangle_area(int a, int h) {
    return 0.5 * a * h;
}

int main() {
    assert(std::abs(triangle_area(10, 8) - 40.0) < 1e-4);
    
    return 0;
}