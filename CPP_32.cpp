#include <iostream>
#include <vector>
#include <cmath>

std::vector<double> readCoefficients() {
    int n;
    std::cout << "Enter the number of coefficients: ";
    std::cin >> n;

    std::vector<double> coeffs(n);

    for (int i = 0; i < n; ++i) {
        std::cout << "Enter coefficient " << i + 1 << ": ";
        std::cin >> coeffs[i];
    }

    return coeffs;
}

double find_zero(const std::vector<double>& coeffs) {
    double x = -coeffs[1] / (2 * coeffs[0]);

    if (poly(coeffs, x + 0.00001) * poly(coeffs, x - 0.00001) > 0) {
        return x;
    } else {
        return -find_zero(readCoefficients());
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
    auto coeffs = readCoefficients();
    double x = find_zero(coeffs);
    std::cout << "The zero of the polynomial is: " << x << std::endl;

    return 0;
}