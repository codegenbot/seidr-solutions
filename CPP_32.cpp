#include <iostream>
#include <vector>
#include <cmath>

double find_zero(const std::vector<double>& coeffs) {
    double x = 0;
    while (true) {
        double y = poly(coeffs, x);
        if (abs(y) < 1e-6)
            return x;
        x += 0.5;
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
    double root = find_zero(coeffs);
    std::cout << "The zero of the polynomial is: " << root << std::endl;
}