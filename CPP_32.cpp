#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double find_zero(vector<double> coeffs, double x) {
    double y = poly(coeffs, x);
    double dy = poly(coeffs, x+0.001)-y;
    
    return round(x - y / dy, 2);
}

double poly(vector<double> coeffs, double x) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

int main() {
    vector<double> coeffs = {1, -2, 3}; 
    double x = -coeffs[1]/(2*coeffs[0]);
    
    solution = find_zero(coeffs, x);
    cout << "The zero of the polynomial is: " << solution << endl;
    return 0;
}