#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

double poly(const vector<double> &coeffs, double x){
    double sum = 0.0;
    for(int i=0; i<coeffs.size(); ++i){
        sum += coeffs[i] * pow(x, i);
    }
    return sum;
}

double find_zero(const vector<double> &coeffs){
    double a = coeffs[0];
    double b = coeffs[1];
    return -b/a;
}

int main() {
    vector<double> coeffs = {1.0, -3.0, 2.0}; // Example coefficients for x^2 - 3x + 2 = 0
    double solution = find_zero(coeffs);
    
    assert (abs(poly(coeffs, solution)) < 1e-3);
    
    cout << "Solution found: " << solution << endl;
    
    return 0;
}