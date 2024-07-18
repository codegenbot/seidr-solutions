#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

double poly(std::vector<double> coeffs, double x){
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); ++i){
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(std::vector<double> xs){
    double a = xs[0];
    double b = xs[1];
    return -b/a;
}

int main() {
    std::vector<double> coeffs = {1, -3, 2}; // example coefficients for x^2 - 3x + 2
    double solution = find_zero(coeffs);
    assert(std::abs(poly(coeffs, solution)) < 1e-3);
    
    std::cout << "Solution: " << solution << std::endl;
    
    return 0;
}