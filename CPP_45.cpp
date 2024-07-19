#include <iostream>
#include <cmath>
#include <cassert> // Include assert library here

double triangle_area(double a, double h) {
    return 0.5 * a * h;
}

int main() { // Add main function to run the tests
    assert(abs(triangle_area(10, 8) - 40.0) < 1e-4); // Move assert statement inside main function
    return 0; // Return 0 to indicate successful completion
}