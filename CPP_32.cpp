#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int ncoeff = 0;
    std::vector<double> coeffs;
    double solution = 0;
    while (ncoeff < 10) {
        std::cout << "Enter coefficient: ";
        std::cin >> ncoeff;
        coeffs.emplace_back(ncoeff);
    }
    solution = find_zero(coeffs);
    if (abs(poly(coeffs, solution)) < 1e-3) {
        std::cout << "The polynomial has no real roots.";
    }
}

double poly(const std::vector<double>& coeffs, double x) {
    // TODO: implement this function
}

double find_zero(const std::vector<double>& coeffs) {
    // TODO: implement this function
}