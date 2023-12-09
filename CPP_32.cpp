#include <iostream>
#include <vector>
#include <cassert>

double find_zero(const std::pmr::vector<double>& coeffs, int ncoeff) {
    // Implement the function to calculate the roots of the polynomial equation
}

int main() {
    std::pmr::vector<double> coeffs = {1.0, -2.0, 1.0};
    double solution = find_zero(coeffs, coeffs.size());
    if (abs(poly(solution)) < 1e-3) {
        std::cout << "The solution is: " << solution << std::endl;
    } else {
        throw std::runtime_error("No solution found");
    }
    return 0;
}