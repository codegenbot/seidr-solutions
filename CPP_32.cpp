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
    int n;
    cin >> n;

    vector<double> coeffs(n); 

    for(int i = 0; i < n; i++) {
        cin >> coeffs[i];
    }

    double x;
    cin >> x;

    double solution = find_zero(coeffs, x);

    cout << fixed << setprecision(6) << abs(solution - poly) << endl;
}