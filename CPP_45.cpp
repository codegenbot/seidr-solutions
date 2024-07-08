// Include necessary headers if needed
#include <iostream>
#include <cassert>

// Define the function signature
double triangle_area(double a, double h) {
    return 0.5 * a * h;
}

int main() {
    assert(std::abs(triangle_area(10, 8) - 40.0) < 1e-4);
  
    // Add more test cases if necessary
  
    return 0;
}