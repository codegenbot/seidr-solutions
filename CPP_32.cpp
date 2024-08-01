#include <vector>
#include <cmath>

double poly(const vector<double>& xs, double x) {
    double result = 0;
    for (int i = 0; i < xs.size(); ++i) {
        result += xs[i] * pow(x, i);
    }
    return result;
}

double find_zero(const vector<double>& xs) {
    double a = xs[0], b = xs[1];
    return -b / a;
}

int main() {
    vector<double> coeffs = {1, -3, 2}; 
    double solution = find_zero(coeffs);
    assert(abs(poly(coeffs, solution)) < 1e-3);
    return 0;
}