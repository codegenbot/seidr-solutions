#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double poly(std::vector<double> coeffs, double x);

double find_zero(std::vector<double> coeffs) {
    double a = coeffs[0];
    double b = coeffs[1];
    return -b / a;
}

double poly(std::vector<double> coeffs, double x) {
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * std::pow(x, i);
    }
    return result;
}

int main() {
    std::vector<double> coeffs;

    cout << "Enter the coefficients of the polynomial in order (from highest power to lowest): ";
    double coeff;
    while (cin >> coeff) {
        coeffs.push_back(coeff);
    }

    double solution = find_zero(coeffs);
    cout << "Solution: " << solution << endl;

    return 0;
}