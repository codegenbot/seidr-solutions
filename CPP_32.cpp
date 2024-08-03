#include <vector>
#include <cmath>

double poly(const vector<double>& coeffs, double x) {
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(const vector<double>& xs) {
    double a = poly(xs, 1.0);
    double b = poly(xs, 0.0);
    return -b/a;
}

int main() {
    vector<double> coeffs = {1.0, 2.0, 3.0}; // Example coefficients
    double solution;
    coeffs.push_back(4.0); // Example of adding coefficient to the vector
    solution = find_zero(coeffs);
    assert(abs(poly(coeffs, solution)) < 1e-3);
    
    return 0;
}