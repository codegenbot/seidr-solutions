
#include <iostream>
#include <cmath>
#include <vector>

float find_zero(const std::vector<double>& coeffs) {
    float x = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        x += coeffs[i] * pow(x, i);
    }
    return x;
}

float poly(const std::vector<double>& coeffs) {
    float y = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        y += coeffs[i] * pow(y, i);
    }
    return y;
}

int main() {
    std::vector<double> coeff_vec{1.0, -2.0, 1.0};
    float solution = find_zero(coeff_vec);
    if (std::abs(poly(coeff_vec, solution)) < 1e-3) {
        std::cout << "The solution is: " << solution << std::endl;
    } else {
        throw std::runtime_error("No solution found");
    }
    return 0;
}