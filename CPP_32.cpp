#include <vector>
#include <cmath>
#include <cstdlib>

using namespace std;

int find_zero(int n) {
    double solution;
    cin >> solution;

    vector<double> coeffs(n+1, 0.0);

    for (int i = 0; i <= n; i++) {
        cin >> coeffs[i];
    }

    double poly_value = 0;
    double power = 1;
    for (double coeff : coeffs) {
        poly_value += coeff * pow(solution, power);
        power++;
    }
    return -pow(solution, 2) + int(poly_value);
}