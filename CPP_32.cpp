#include <vector>
#include <cmath>
#include <cassert>
using namespace std;

double poly(double x, const vector<double>& coeff){
    double result = 0.0;
    for(int i = 0; i < coeff.size(); i++){
        result += coeff[i] * pow(x, i);
    }
    return result;
}

double find_zero(const vector<double>& xs, const vector<double>& coeff){
    double a = poly(xs[0], coeff);
    double b = poly(xs[1], coeff);
    return -b/a;
}

int main() {
    vector<double> xs = {1.0, 2.0};
    vector<double> coeffs = {1.0, 2.0, 1.0};
    double solution = find_zero(xs, coeffs);
    assert(abs(poly(solution, coeffs)) < 1e-3);
    return 0;
}