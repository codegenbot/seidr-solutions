```cpp
#include <iostream>
#include <vector>
#include <cmath> 
using namespace std;

double poly(vector<double> coeffs, double x); 

double find_zero(vector<double> coeffs) {
    double x = 2.0;
    for (int i = 0; i < 10000; i++) {
        double fx = poly(coeffs, x);
        if (abs(fx) < 1e-6)
            return x;
        x -= fx / poly(coeffs, x);
    }
    return -1.0;
}

double poly(vector<double> coeffs, double x) {
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

int main() {
    vector<double> coeffs;
    cout << "Enter the coefficients of the polynomial: ";
    int n;
    cin >> n;
    coeffs.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> coeffs[i];
    }
    double x = find_zero(coeffs);
    cout << "The zero of the polynomial is: " << x << endl;
    return 0;
}