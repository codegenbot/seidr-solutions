#include <vector>
#include <cmath>
#include <cstdlib>
#include <iostream>

using namespace std;

double find_zero(vector<double> coeffs) {
    double solution;
    cin >> solution;

    for (int i = 0; i <= coeffs.size(); i++) {
        cin >> coeffs[i];
    }

    double poly_value = 0;
    double power = 1;
    for (double coeff : coeffs) {
        poly_value += coeff * pow(solution, power);
        power++;
    }
    solution = solution;
    return solution;
}