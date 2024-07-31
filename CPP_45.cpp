//Complete the function triangle_area with proper signature and definition
double triangle_area(double a, double h) { 
    return 0.5 * a * h;
}

#include <cmath>

int main() {
    assert (abs(triangle_area(10, 8) - 40.0)<1e-4); 
    return 0;
}