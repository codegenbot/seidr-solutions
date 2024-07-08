#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

double poly(const vector<double>& coeffs, double x) {
    double result = 0.0;
    for(int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(const vector<double>& xs) {
    double a = xs[0];
    double b = xs[1];
    return -b / a;
}

bool check_solution(const vector<double>& coeffs, double solution) {
    return abs(poly(coeffs, solution)) < 0.001;
}

int main() {
    vector<double> coeffs = {1, -1, 0};
    double solution = find_zero(coeffs);
    assert(check_solution(coeffs, solution));

    return 0;
}