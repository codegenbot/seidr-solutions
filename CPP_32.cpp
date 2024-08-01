#include <vector>
#include <cmath>
#include <cassert>

double poly(const std::vector<double>& coeffs, double x) {
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(const std::vector<double>& coeffs) {
    return -coeffs[0] / coeffs[1]; // Assuming a simple linear polynomial ax + b for demonstration purpose
}

int main() {
    std::vector<double> coeffs = {1, -1}; // Example: For polynomial x - 1, coeffs = {1, -1}

    double solution = find_zero(coeffs);
    assert(fabs(poly(coeffs, solution)) < 1e-3);

    return 0;
}