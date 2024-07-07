#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int ncoeff; 
    std::vector<double> coeffs;

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
        for(int j = 0; j < i+1; j++) { // Fix: replaced j <= i with j < i+1
            poly += coeffs[j] * pow(x, j);
        }
        y = poly;
    }

    std::cout << "The value of y is: " << y << std::endl;

    return 0;
}