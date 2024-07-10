#include <vector>
#include <cmath>
#include <cassert>

double find_zero(const std::vector<double>& xs){
    double a = xs[0];
    double b = xs[1];
    return -b/a;
}

double poly(const std::vector<double>& coeffs, double x){
    double result = 0.0;
    // Add your polynomial calculation logic here
    return result;
}

int main(){
    std::vector<double> coeffs = {1, -3, 2}; // Example coefficients of a polynomial
    double solution = find_zero(coeffs);
    assert(std::abs(poly(coeffs, solution)) < 1e-3);
    
    return 0;
}