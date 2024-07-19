#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double find_zero(vector<double> coeffs, double x) {
    double sum = 0;
    for(int i = 0; i < coeffs.size(); i++) {
        sum += coeffs[i] * pow(x, i);
    }
    return sum;
}

int main() {
    int n;
    cin >> n;

    vector<double> coeffs;
    for(int i = 0; i < n; i++) {
        double coeff;
        cin >> coeff;
        coeffs.push_back(coeff);
    }

    double x;
    cin >> x;

    double solution = find_zero(coeffs, x); 

    cout << fixed << setprecision(6) << solution << endl;

    assert (abs(poly(coeffs, solution)) < 1e-3);

    return 0;
}