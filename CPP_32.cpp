#include <iostream>
#include <cmath>
#include <vector>

int find_zero(std::vector<double> coeffs);

double poly(std::vector<double> coeffs, double x);

int main() {
    int ncoeff;
    std::vector<double> coeffs;

    std::cout << "Enter the number of coefficients: ";
    std::cin >> ncoeff;
    
    coeffs.clear();

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
    // Your code here
    return 0; 
}

double poly(std::vector<double> coeffs, double x) {
    // Your code here
    return 0.0;
}