#include <iostream>
#include <vector>
#include <cmath>

double find_zero(const std::vector<double>& coeffs, double x) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

int main() {
    int n;
    cin >> n;

    std::vector<double> coeffs;
    for(int i = 0; i < n; i++) {
        double coeff;
        cin >> coeff;
        coeffs.push_back(coeff);
    }

    double x;
    cin >> x;

    double solution = find_zero(coeffs, x); 

    cout << fixed << setprecision(6) << solution << endl;

    assert (abs(solution) < 1e-3);
}