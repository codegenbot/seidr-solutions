#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

double poly(const std::vector<double>& coeffs, double x) {
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(const std::vector<double>& coeffs) {
    // Newton's method for finding zero
    double guess = 0.0; // Initial guess
    double threshold = 1e-6;
    while (true) {
        double fx = poly(coeffs, guess);
        if (fabs(fx) < threshold) {
            break; // Found the zero
        }
        
        double derivative = 0.0;
        for (int i = 1; i < coeffs.size(); ++i) {
            derivative += i * coeffs[i] * pow(guess, i - 1);
        }
        
        guess -= fx / derivative;
    }
    
    return guess;
}

int main() {
    std::vector<double> coeffs;
    int n;
    cout << "Enter the number of coefficients: ";
    cin >> n;
    
    cout << "Enter the coefficients: ";
    for (int i = 0; i < n; ++i) {
        double coeff;
        cin >> coeff;
        coeffs.push_back(coeff);
    }

    double solution = find_zero(coeffs);
    assert(fabs(poly(coeffs, solution)) < 1e-3);

    return 0;
}