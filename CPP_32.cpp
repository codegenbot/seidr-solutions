#include <iostream>
#include <vector>
#include <cmath>
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
    vector<double> coeffs({-3.0, 13.0, -9.0, 1.0});
    double solution = 1.5;

    cout << fixed << setprecision(6) << find_zero(coeffs, solution) << endl;

    return 0;
}