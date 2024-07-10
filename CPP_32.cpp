#include <iostream>
#include <vector>

double poly(const std::vector<double>& coeffs, double x) {
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(const std::vector<double>& coeffs) {
    double solution = 1.0;
    for (int i = 0; i < 10; ++i) {
        double next_solution = 0.5 * (solution + poly(coeffs, solution) / poly(coeffs, solution));
        if (abs(next_solution - solution) < 1e-6) {
            return next_solution;
        }
        solution = next_solution;
    }
    return solution;
}

int main() {
    std::vector<double> coeffs = {1.0, -7.0, 12.0, -6.0};
    double solution = find_zero(coeffs);
    if (abs(poly(coeffs, solution)) > 1e-3) {
        std::cout << "Error: The zero of the polynomial is not accurate." << std::endl;
    } else {
        std::cout << "The zero of the polynomial is: " << solution << std::endl;
    }
    return 0;
}