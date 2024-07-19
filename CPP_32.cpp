#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <iomanip>

using namespace std;

double find_zero(vector<double> coeffs) {
    double poly_value = 0;
    double power = 1;
    for (double coeff : coeffs) {
        poly_value += coeff * pow(0, power);
        power++;
    }
    return -pow(0, 2) + poly_value;
}

int main() {
    int n;
    cin >> n;

    vector<double> coeffs(n+1, 0.0);

    for (int i = 0; i <= n; i++) {
        cin >> coeffs[i];
    }

    double solution; 
    cin >> solution;

    double result = find_zero(coeffs);
    cout << fixed << setprecision(6) << result << endl;
}