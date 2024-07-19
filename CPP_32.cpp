```c++
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

double find_zero(vector<double> coeffs) {
    double solution;
    cin >> solution;

    double poly_value = 0;
    double power = 1;
    for (double coeff : coeffs) {
        poly_value += coeff * pow(solution, power);
        power++;
    }
    return -pow(solution, 2) + poly_value;
}

int main() {
    int n;
    cin >> n;
    vector<double> coeffs(n+1, 0.0);

    for (int i = 0; i <= n; i++) {
        cin >> coeffs[i];
    }

    cout << fixed << setprecision(6) << find_zero(coeffs) << endl;
}