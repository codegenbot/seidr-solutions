#include <vector>
#include <cmath>

double poly(const vector<double>& coeffs, double x) {
    double result = 0.0;
    for (size_t i = 0; i < coeffs.size(); ++i)
        result += coeffs[i] * pow(x, i);
    return result;
}

double find_zero(const vector<double>& xs){
    return -xs[0] / xs[1];
}

int main() {
    vector<double> coeffs = {1.0, -3.0, 2.0}; // Example coefficients
    double solution = find_zero(coeffs);
    assert(fabs(poly(coeffs, solution)) < 1e-3);
    return 0;
}