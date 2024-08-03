#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

double poly(const vector<double>& xs, double x) {
    double result = 0;
    for(const auto& coeff : xs) {
        result += coeff * pow(x, &coeff - &xs[0]);
    }
    return result;
}

double find_zero(const vector<double>& xs){
    double a = xs[0];
    double b = xs[1];
    return -b/a;
}

int main() {
    vector<double> coeffs = {1, -2, 1};
    double solution = find_zero(coeffs);
    assert (abs(poly(coeffs, solution)) < 1e-3);
    
    return 0;
}