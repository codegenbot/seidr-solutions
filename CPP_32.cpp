#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

double poly(const vector<double>& xs, double x) {
    double result = 0;
    for (int i = 0; i < xs.size(); ++i) {
        result += xs[i] * pow(x, i);
    }
    return result;
}

double find_zero(const vector<double>& xs) {
    double a = xs[0];
    double b = xs[1];
    return -b/a;
}

int main() {
    vector<double> coeffs = {1, -2, 1}; // example coefficients
    double solution;
    solution = find_zero(coeffs);
    assert(fabs(poly(coeffs, solution)) < 1e-3);
    return 0;
}