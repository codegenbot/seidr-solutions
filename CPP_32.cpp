#include <iostream>
#include <vector>
#include <cmath>

double poly(const std::vector<double>& coeffs, double x){
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(const std::vector<double>& coeffs){
    double a = coeffs[0];
    double b = coeffs[1];
    return -b/a;
}

int main() {
    std::vector<double> coeffs; // Initialized as an empty vector
    double coeff;
    for (int i = 0; i < 3; i++) {
        std::cin >> coeff; // Read coefficients from user input
        coeffs.push_back(coeff);
    }

    double solution = find_zero(coeffs);

    std::cout << "Solution: " << solution << std::endl;
    std::cout << "Result: " << poly(coeffs, solution) << std::endl;

    return 0;
}