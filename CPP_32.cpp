#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

double poly(const vector<double>& coeffs, double x) {
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(const vector<double>& coeffs) {
    double guess = 0.0;
    double threshold = 1e-6;
    while (true) {
        double fx = poly(coeffs, guess);
        if (fabs(fx) < threshold) {
            break;
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
    vector<double> coeffs = {1, -3, 2}; // Example coefficients
    // Input coefficients into coeffs vector

    double solution = find_zero(coeffs);
    assert(fabs(poly(coeffs, solution)) < 1e-3);

    return 0;
}