#include <vector>
#include <cmath>
#include <cassert>
#include <cstdlib> // Add missing header

double poly(std::vector<double> coeffs, double x){
    double result = 0.0;
    for(int i=0; i<coeffs.size(); i++){
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double abs(double num){
    return num >= 0 ? num : -num;
}

double find_zero(std::vector<double> coeffs){ // Change vector to std::vector
    double a = coeffs[0];
    double b = coeffs[1];
    return -b/a;
}

int main() {
    std::vector<double> coeffs = {1.0, -3.0, 2.0}; // Correctly initialize the coeffs vector
    double solution = find_zero(coeffs); // Call find_zero with corrected parameter
    assert(std::abs(poly(coeffs, solution)) < 1e-3); // Call poly with corrected function name
}