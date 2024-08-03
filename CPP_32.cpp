#include <vector>
#include <cmath>
#include <cassert>

double poly(const std::vector<double>& coeffs, double x) {
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * std::pow(x, i);
    }
    return result;
}

double find_zero(const std::vector<double>& coeffs) {
    double a = poly(coeffs, 1.0);
    double b = poly(coeffs, 0.0);
    return -b/a;
}

int main() {
    std::vector<double> coeffs = {1.0, 2.0, 3.0}; 
    coeffs.push_back(4.0);
    double solution = find_zero(coeffs);
    assert(std::abs(poly(coeffs, solution)) < 1e-3);
    
    return 0;
}