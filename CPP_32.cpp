#include <vector>
#include <cmath>
#include <cassert>

double poly(const vector<double>& coeffs, double x) {
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(const vector<double>& xs) {
    double a = xs[0];
    double b = xs[1];
    double discriminant = b * b - 4 * a;
    
    if (discriminant < 0) {
        return 0.0; // handle complex roots
    }

    return (-b + sqrt(discriminant)) / (2 * a);
}

int main() {
    vector<double> coeffs = {1, -4, 4}; // Example quadratic equation: x^2 - 4x + 4 = 0
    double solution = find_zero(coeffs);
    
    assert(fabs(poly(coeffs, solution)) < 1e-3);
    
    return 0;
}