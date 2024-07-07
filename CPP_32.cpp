```cpp
#include <iostream>
#include <cmath>
#include <vector>

double poly(std::vector<double> coeffs, double x);

int main() {
    int ncoeff;
    std::cout << "Enter the number of coefficients: ";
    std::cin >> ncoeff;
    
    std::vector<double>(ncoeff, 0); // Corrected line

    for(int i = 0; i < ncoeff; i++) {
        double coeff;
        std::cout << "Enter coefficient " << i+1 << ": ";
        std::cin >> coeff;
        ((std::vector<double>&)coeffs)[i] = coeff;
   }
    
    double x, y;
    std::cout << "Enter the value of x: ";
    std::cin >> x;

    for(int i = 0; i < ncoeff; i++) {
        double result = 0.0;
        for(int j = 0; j <= i; j++) {
            result += coeffs[j] * pow(x, j);
        }
        y = result;
    }

    std::cout << "The value of y is: " << y << std::endl;

    int solution = find_zero(coeffs);

    std::cout << "The zero of the polynomial is: " << solution << std::endl;

    assert(std::abs(poly(coeffs, solution)) < 1e-3);
    
    return 0;
}

int find_zero(std::vector<double> coeffs) {
    double x = 1.0; // Initial guess
    double eps = 1e-6; // Error tolerance

    while (true) {
        double f = poly(coeffs, x);
        if (std::abs(f) < eps)
            break;
        x -= f / poly(coeffs, x); // Newton-Raphson method
    }

    return static_cast<int>(x);
}

double poly(std::vector<double> coeffs, double x) {
    double y = 0.0; // Initialize result to 0

    for(int i = 0; i < coeffs.size(); i++) {
        y += coeffs[i] * pow(x, i);
    }

    return y;
}