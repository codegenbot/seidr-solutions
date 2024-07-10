#include <iostream>
#include <vector>
using namespace std;

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
    vector<vector<double>> coeffs = {{1.0, -7.0, 12.0, -6.0}};
    double solution = find_zero(coeffs[0]);
    if (abs(poly(coeffs[0], solution)) > 1e-3) {
        cout << "Error: The zero of the polynomial is not accurate." << endl;
    } else {
        cout << "The zero of the polynomial is: " << solution << endl;
    }
    return 0;
}