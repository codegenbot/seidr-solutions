#include <vector>
#include <cmath>

double poly(std::vector<double> coeffs, double x);

double find_zero(std::vector<double> coeffs) {
    double a = coeffs[0];
    double b = coeffs[1];
    return -b / a;
}

double poly(std::vector<double> coeffs, double x) {
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * std::pow(x, i);
    }
    return result;
}

int main() {
    std::vector<double> coeffs = {1.0, -3.0, 2.0}; // example coefficients
    double solution = find_zero(coeffs);
    return 0;
}