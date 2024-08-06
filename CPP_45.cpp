#include <cassert>
#include <cmath>

double triangle_area(double a, double h) {
    return 0.5 * a * h;
}

int main(int argc, char *argv[]) {
    assert(fabs(triangle_area(10, 8) - 40.0) < 1e-4);
    return 0;
}