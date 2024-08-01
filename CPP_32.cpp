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
    // Implementing Newton's method to find the root
    double a = coeffs[0];
    double b = coeffs[1];
    double x0 = 0.0; // Initial guess

    while (true) {
        double x1 = x0 - poly(coeffs, x0) / poly(std::vector<double>{a, b}, x0);
        if (std::abs(x1 - x0) < 1e-6)
            return x1;
        x0 = x1;
    }
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