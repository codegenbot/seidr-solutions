#include <iostream>
#include <vector>

using namespace std;

double find_zero(vector<double> coeffs, double x) {
    double denominator = 2 * coeffs[0] * x - coeffs[1];
    return round(-coeffs[1] / denominator, 2);
}

int main() {
    vector<double> coeffs = {1, -3, 2}; // coefficients of the polynomial
    double x = -coeffs[1]/(2*coeffs[0]); // initial guess for the root
    // find the zero of the polynomial using the find_zero function
    double solution = find_zero(coeffs, x);
    return 0;
}