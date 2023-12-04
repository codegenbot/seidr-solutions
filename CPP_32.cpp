
#include <iostream>
#include <vector>
#include <cmath>

double poly(const std::vector<double>& coeffs, double solution) {
    // TODO: implement this function
}

int main() {
    int ncoeff = 0;
    std::vector<double> coeffs_vec;
    double solution = 0;
    while (ncoeff < 10) {
        std::cout << "Enter coefficient: ";
        std::cin >> ncoeff;
        coeffs_vec.emplace_back(ncoeff);
    }
    solution = find_zero(coeffs_vec);
    if (abs(poly(coeffs_vec, solution)) < 1e-3) {
        std::cout << "The polynomial has no real roots.";
    }
}