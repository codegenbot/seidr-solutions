#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

double poly(const std::vector<double>& xs, double x){
    double result = 0.0;
    for (int i = 0; i < xs.size(); ++i){
        result += xs[i] * pow(x, i);
    }
    return result;
}

double find_zero(const std::vector<double>& xs){
    double a = xs[0];
    double b = xs[1];
    return -b/a;
}

int main() {
    std::vector<double> coeffs = {1.0, -3.0, 2.0}; // Example coefficients of a polynomial: x^2 - 3x + 2
    double solution = find_zero(coeffs);
    assert(std::abs(poly(coeffs, solution)) < 1e-3);
    
    return 0;
}