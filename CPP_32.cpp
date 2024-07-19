#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

double find_zero(const std::vector<double>& coeffs, double x) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

int main() {
    double n;
    cin >> n;

    std::vector<double> coeffs;
    for(double i = 0; i < n; i++) {
        double val;
        cin >> val;
        coeffs.push_back(val);
    }

    double x;
    cin >> x;

    double result = find_zero(coeffs, x); 

    cout << fixed << setprecision(6) << result << endl;

    assert (abs(result) < 1e-3);
}