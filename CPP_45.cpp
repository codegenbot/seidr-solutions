#include <iostream>
#include <cmath>

double triangle_area(double a, double h) {
    return 0.5 * a * h;
}

#include <cassert>
using namespace std;

assert(abs(triangle_area(10, 8) - 40.0) < 1e-4);