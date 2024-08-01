#include <iostream>
#include <vector>
#include <cmath>

double poly(std::vector<double> coeffs, double x);

double find_zero(std::vector<double> coeffs) {
    return -coeffs[1] / coeffs[0];
}

double poly(std::vector<double> coeffs, double x) {
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * std::pow(x, i);
    }
    return result;
}

int main() {
    std::vector<double> coeffs = {};

    std::cout << "Enter the coefficients of the polynomial in order (from highest power to lowest): ";
    double coeff;
    while (std::cin >> coeff) {
        coeffs.push_back(coeff);
    }

    double solution = find_zero(coeffs);
    std::cout << "Solution: " << solution << std::endl;

    return 0;
}