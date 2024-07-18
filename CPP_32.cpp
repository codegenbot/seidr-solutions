#include <vector>
#include <cmath>
#include <cassert>

double find_zero(const vector<double>& xs){
    double a = xs[0];
    double b = xs[1];
    return -b/a;
}

double poly(const vector<double>& coeffs, double solution){
    // Implementation of poly function
    return 0.0;
}

int main(){
    vector<double> coeffs = {1.0, -2.0, 1.0}; // example coefficients
    double solution = find_zero(coeffs);
    assert(abs(poly(coeffs, solution)) < 1e-3);
    
    return 0;
}