#include <iostream>
#include <cmath>
#include <vector>

double poly(const std::vector<double>& coeffs, double x) {
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(const std::vector<double>& coeffs) {
    return -coeffs[1] / coeffs[0];
}

int main() {
    std::vector<double> coeffs = {1.0, -1.0, -6.0};
    
    assert(std::abs(poly(coeffs, find_zero(coeffs))) < 1e-3);
    
    return 0;
}