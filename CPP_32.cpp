#include <iostream>
#include <vector>
#include <cmath>

double find_zero(const std::vector<double>& coeffs) {
    double x = -1;
    while (abs(poly(coeffs, x)) > 0.001) {
        x -= poly(coeffs, x) / (poly(coeffs, x + 0.001) - poly(coeffs, x));
    }
    return x;
}

double poly(const std::vector<double>& coeffs, double x) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

int main() {
    std::vector<double> coeffs;
    // Input coefficients
    int n;
    cin >> n;
    for(int i=0; i<n; ++i){
        double val;
        cin>>val;
        coeffs.push_back(val);
    }

    // Use the poly and find_zero functions
    double x = find_zero(coeffs);
    cout << "The zero of polynomial is: " << x << endl;
    
    return 0;
}