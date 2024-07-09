```cpp
#include <iostream>
#include <vector>
#include <cmath>

double poly(std::vector<double> coeffs, double x) {
    double res = 0;
    for (int i = 0; i <= coeffs.size() - 1; i++) {
        res += coeffs[i] * pow(x, coeffs.size() - 1 - i);
    }
    return res;
}

double find_zero(std::vector<double> coeffs) {
    int n = coeffs.size();
    if (n % 2 != 0)
        return -1;

    double root = -coeffs[1]/(2*coeffs[0]); 
    return std::round(root);
}

int main() {
    std::vector<double> coeffs;
    for (double i = 0; i < 5; ++i) {
        coeffs.push_back(i);
    }
    double x = 2.0; 
    double result = poly(coeffs, x);
    std::cout << "The polynomial at x = " << x << " is: " << result << "\n";
    
    int ncoeff = coeffs.size();
    double solution = find_zero(coeffs);
    std::cout << "The zero of the polynomial is: " << solution << "\n";

    return 0;
}