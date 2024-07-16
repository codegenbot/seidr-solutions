#include <vector>
#include <cmath>
#include <cassert>

double poly(const vector<double>& xs, double val){
    double result = 0.0;
    for (int i = 0; i < xs.size(); ++i) {
        result += xs[i] * pow(val, xs.size() - 1 - i);
    }
    return result;
}

double find_zero(const vector<double>& xs){
    return -xs[0] / xs[1];
}

int main(){
    vector<double> coeffs = {1.0, -2.0, 1.0}; // example coefficients
    double solution;
    
    solution = find_zero(coeffs);
    assert (abs(poly(coeffs, solution)) < 1e-3);
    
    // add more test cases or code logic as needed
    
    return 0;
}