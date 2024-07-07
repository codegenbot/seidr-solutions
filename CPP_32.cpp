#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int ncoeff; 
    std::vector<double> coeffs;
    
    std::cout << "Enter the number of coefficients: ";
    std::cin >> ncoeff;
    
    for(int i = 0; i < ncoeff; i++) {
        std::cout << "Enter coefficient " << i+1 << ": ";
        double coeff;
        std::cin >> coeff;
        coeffs.push_back(coeff);
    }
    
    double x, y;
    std::cout << "Enter the value of x: ";
    std::cin >> x;
    
    find_zero(coeffs, ncoeff, x, y);
    
    std::cout << "The value of y is: " << y << std::endl;
    
    return 0;
}

void find_zero(std::vector<double> coeffs, int ncoeff, double x, double& y) {
    double poly = 0.0;
    for(int i = 0; i < ncoeff; i++) {
        poly += coeffs[i] * pow(x, i);
    }
    y = poly;
}

double poly(std::vector<double> coeffs, int ncoeff, double x) {
    double poly = 0.0;
    for(int i = 0; i < ncoeff; i++) {
        poly += coeffs[i] * pow(x, i);
    }
    return poly;
}