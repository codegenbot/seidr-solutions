#include <iostream>
#include <vector>

double poly(std::vector<double>& coeffs, double x) {
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(std::vector<double>& coeffs) {
    if (coeffs.size() == 3) {
        double a = coeffs[0];
        double b = coeffs[1];
        double c = coeffs[2];
        double discriminant = b * b - 4 * a * c;
        
        if (discriminant >= 0) {
            return (-b + sqrt(discriminant)) / (2 * a);
        }
        return 0.0; // Return 0 if no real roots
    }
    return 0.0; // Return 0 for unsupported polynomial degree
}

int main() {
    std::vector<double> coeffs = {1.0, -2.0, 1.0}; // Example coefficients
    double solution;
    solution = find_zero(coeffs);
    assert(std::abs(poly(coeffs, solution)) < 1e-3);
    
    return 0;
}