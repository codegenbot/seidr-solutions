#include <iostream>
#include <vector>
#include <cmath>

double poly(std::vector<double> coeffs, double x);

double find_zero(std::vector<double> xs) {
    double a = xs[0];
    double b = xs[1];
    return -b / a;
}

int main() {
    std::vector<double> coeffs;
    double coeff;
    
    // Read coefficients from user input
    while (std::cin >> coeff) {
        coeffs.push_back(coeff);
    }
    
    double solution = find_zero(coeffs);
    
    std::cout << "Zero of the polynomial is: " << solution << std::endl;
    
    return 0;
}