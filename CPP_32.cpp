#include <iostream>
#include <vector>
#include <cmath>

std::vector<double> inputVector() {
    int n;
    std::cout << "Enter the number of coefficients: ";
    std::cin >> n;
    std::vector<double> coeffs(n);
    
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter coefficient " << i+1 << ": ";
        std::cin >> coeffs[i];
    }
    
    return coeffs;
}

double findZero(std::vector<double> coeffs, double x, double tolerance) {
    double zero = x;
    while (true) {
        double polyValue = 0.0;
        for (int i = 0; i < coeffs.size(); ++i) {
            polyValue += coeffs[i] * pow(zero, i);
        }
        
        if (std::abs(polyValue) < tolerance)
            return zero;
        
        double derivative = 0.0;
        for (int i = 1; i < coeffs.size(); ++i) {
            derivative += i * coeffs[i] * pow(zero, i-1);
        }
        
        zero -= polyValue / derivative;
    }
}

double poly(std::vector<double> coeffs, double x) {
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * pow(x, i);
    }
    
    return result;
}

int main() {
    std::vector<double> coeffs = inputVector();
    double x = 1.0; // initial guess
    double tolerance = 1e-6;
    double zero = findZero(coeffs, x, tolerance);
    std::cout << "The root of the polynomial is: " << zero << std::endl;
    
    return 0;
}