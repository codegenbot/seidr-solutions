#include <iostream>
#include <vector>
#include <cmath>

double poly(std::vector<double> coeffs, double x);

double find_zero(std::vector<double> xs) {
    double a = xs[0];
    double b = xs[1];
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
    std::vector<double> coefficients = {1.0, -3.0, 2.0}; // Example coefficients for x^2 - 3x + 2
    std::vector<double> xs = {1.0, -2.0}; // Example values for a and b in find_zero function
    std::vector<double> coeffs;

    for (double coeff : coefficients) {
        coeffs.push_back(coeff);
    }

    double solution = find_zero(xs);
    std::cout << "Solution (x-intercept): " << solution << std::endl;

    return 0;
}