#include <iostream>
#include <vector>
#include <cmath>

double poly(std::vector<double> coeffs, double x) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

int main() {
    int n;
    std::cout << "Enter the degree of polynomial: ";
    std::cin >> n;

    std::vector<double> coeffs(n + 1);
    std::cout << "Enter the coefficients (in order): ";
    for (double &c : coeffs) {
        std::cin >> c;
    }

    double x;
    std::cout << "Enter the value of x: ";
    std::cin >> x;

    double result = poly(coeffs, x);
    std::cout << "The polynomial evaluated at x is: " << result << std::endl;

    return 0;
}