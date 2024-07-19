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

double find_zero(const vector<double>& coeffs){
    double a = poly(1.0, coeffs);
    double b = poly(2.0, coeffs);
    return -b/a;
}

int main() {
    vector<double> coefficients = {1.0, 2.0, 1.0};
    double solution = find_zero(coefficients);

    assert(abs(poly(solution, coefficients)) < 1e-3);

    return 0;
}