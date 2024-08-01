#include <iostream>
#include <vector>
#include <cmath>

double poly(const std::vector<double>& coeffs, double x) {
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double abs(double x) {
    return x >= 0 ? x : -x;
}

double find_zero(const std::vector<double>& xs){
    double a = xs[0];
    double b = xs[1];
    double discriminant = b * b - 4 * a;
    return (-b + sqrt(discriminant)) / (2 * a);
}

int main() {
    std::vector<double> coeffs = {1.0, -4.0, 4.0}; // Example coefficients for x^2-4x+4 = (x-2)^2
    double solution;
    solution = find_zero(coeffs);
    assert(abs(poly(coeffs, solution)) < 1e-3);
    
    return 0;
}