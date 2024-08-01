#include <iostream>
#include <vector>
#include <cmath>

double poly(std::vector<double> coeffs, double x);
double find_zero(std::vector<double> coeffs);

double poly(std::vector<double> coeffs, double x) {
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * std::pow(x, i);
    }
    return result;
}

double find_zero(std::vector<double> coeffs) {
    double a = coeffs[0];
    double b = coeffs[1];
    return -b / a;
}

int main() {
    std::vector<double> coeffs;

    std::cout << "Enter the coefficients of the polynomial in order (from highest power to lowest): ";
    double coeff;
    while (std::cin >> coeff) {
        coeffs.push_back(coeff);
        if (coeffs.size() > 1) break;
    }

    double solution;
    solution = find_zero(coeffs);
    std::cout << "Solution: " << solution << std::endl;

    return 0;
}