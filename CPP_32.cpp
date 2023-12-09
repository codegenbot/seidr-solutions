#include <iostream>
#include <vector>

float find_zero(std::vector<double> coeffs) {
    // Implement the function to find a zero of a polynomial
}

int main() {
    std::vector<double> coeffs{1.0, -2.0, 1.0};
    int ncoeff = coeffs.size();
    float solution = find_zero(coeffs);
    if (std::abs(poly(coeffs, solution)) < 1e-3) {
        std::cout << "The solution is: " << solution << std::endl;
    } else {
        throw std::runtime_error("No solution found");
    }
    return 0;
}