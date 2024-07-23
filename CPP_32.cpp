#include <iostream>
#include <vector>
#include <cmath>

double find_zero(const std::vector<double>& coeffs) {
    double x = 1.0;
    while (true) {
        double f_x = poly(coeffs, x);
        if (abs(f_x) < 1e-6)
            return x;
        x -= f_x / (poly(coeffs, x + 0.0001) - f_x);
    }
}

double poly(const std::vector<double>& coeffs, double x) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

int main() {
    std::vector<double> coeffs = {1.0, -2.0, 3.0};
    double zero = find_zero(coeffs);
    std::cout << "The zero of the polynomial is: " << zero << std::endl;
    return 0;
}