#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double poly(vector<double> coeffs, double x) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(vector<double> coeffs) {
    double x = 1.0;
    double epsilon = 1e-6;

    while (true) {
        double poly_val = poly(coeffs, x);
        double derivative = 0;

        for (int i = 0; i < coeffs.size(); i++) {
            if (i == 0)
                continue;
            derivative += i * coeffs[i] * pow(x, i - 1);
        }

        double new_x = x - poly_val / derivative;

        if (abs(new_x - x) < epsilon)
            return x;
        x = new_x;
    }
}

int main() {
    vector<double> coeffs;
    double solution = 0.0;

    int n; // number of coefficients
    cin >> n;

    for (int i = 0; i < n; i++) {
        double coeff; // individual coefficient value
        cin >> coeff;
        coeffs.push_back(coeff);
    }

    double x = find_zero(coeffs);

    return 0;
}