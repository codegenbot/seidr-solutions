#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <iomanip>

using namespace std;

double find_zero(vector<double> coeffs, double x) {
    double poly = 0;
    double power = 1;
    for (double coeff : coeffs) {
        poly += coeff * pow(x, power);
        power++;
    }
    return -pow(x,2) + poly;
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

    assert(abs(find_zero(coeffs, solution)) < 1e-3);
    cout << fixed << setprecision(6) << find_zero(coeffs, solution) << endl;
}