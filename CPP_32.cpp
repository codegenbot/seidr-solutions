#include <vector>
#include <cmath>

double poly(std::vector<double> coeffs, double x) {
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(std::vector<double> coeffs) {
    double x = 0.0; // initial guess
    double epsilon = 1e-6; // tolerance

    while (abs(poly(coeffs, x)) > epsilon) {
        x -= poly(coeffs, x) / poly(std::vector<double>{derivative(coeffs, x)}, x);
    }
    return x;
}

int main() {
    std::vector<double> coeffs = {1.0, -3.0, -4.0}; // example coefficients
    auto solution = find_zero(coeffs);
    assert(abs(poly(coeffs, solution)) < 1e-3);
    return 0;
}