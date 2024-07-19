#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

double poly(vector<double> xs, double x){
    double result = 0;
    for (int i=0; i<xs.size(); i++)
        result += xs[i] * pow(x, i);
    return result;
}

double find_zero(vector<double> xs){
    double a = xs[0];
    double b = xs[1];
    return -a / b;
}

int main() {
    vector<double> coeffs = {1, -3, 2}; 
    double solution;
    solution = find_zero(coeffs);
    assert (abs(poly(coeffs, solution)) < 1e-3);
    
    return 0;
}