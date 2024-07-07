#include <iostream>
#include <vector>
#include <cmath>

int find_zero(const std::vector<double>& coeffs) {
    double x = -coeffs[1] / (2 * coeffs[0]);
    return static_cast<int>(x);
}

int main() {
    int ncoeff; 
    std::vector<double> coeffs = {};

    std::cout << "Enter the number of coefficients: ";
    std::cin >> ncoeff;
    
    for(int i = 0; i < ncoeff; i++) {
        double coeff;
        std::cout << "Enter coefficient " << i+1 << ": ";
        std::cin >> coeff;
        coeffs.push_back(coeff);
    }
    
    double x, y;
    std::cout << "Enter the value of x: ";
    std::cin >> x;

    for(int i = 0; i < ncoeff; i++) {
        double poly = 0.0;
        for(int j = 0; j <= i; j++) {
            poly += coeffs[j] * pow(x, j);
        }
        y = poly;
    }

    std::cout << "The value of y is: " << y << std::endl;

    int solution = find_zero(coeffs);

    std::cout << "The zero of the polynomial is: " << solution << std::endl;

    return 0;
}