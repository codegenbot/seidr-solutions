#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

double findZero(std::vector<double> xs){
    double a = xs[0];
    double b = xs[1];
    return -b/a;
}

double poly(std::vector<double> xs, double x){
    // implementation of the polynomial function
}

int main() {
    std::vector<double> coeffs;
    // populate coeffs vector with coefficients

    double solution = findZero(coeffs);
    assert (std::abs(poly(coeffs, solution)) < 1e-3);
    
    return 0;
}