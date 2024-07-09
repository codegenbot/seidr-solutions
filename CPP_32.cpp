```cpp
#include <iostream>
#include <vector>
#include <cmath>

double poly(const std::vector<double>& coeffs, double solution) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * pow(solution, i);
    }
    return result;
}

double find_zero(const std::vector<double>& coeffs) {
    double solution = 1.0;
    double tolerance = 1e-6;

    while (true) {
        double poly_val = poly(coeffs, solution);

        if (abs(poly_val) < tolerance)
            break;

        solution -= poly_val / coeffs.back();
    }

    return solution;
}

int main() {
    std::vector<double> coeffs; 

    double coeff; 
    int n;
    std::cout << "Enter the number of coefficients: ";
    std::cin >> n;

    coeffs.resize(n);

    for (int i = 0; i < n; ++i) {
        std::cout << "Enter coefficient " << i+1 << ": ";
        std::cin >> coeff;
        coeffs[i] = coeff;
    }

    double solution = find_zero(coeffs); 
    assert(abs(poly(coeffs, solution)) < 1e-3); 
    return 0;
}