#include <vector>
using namespace std;

double poly(vector<double> coeffs, double x) {
    double result = coeffs[0];
    for (int i = 1; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(vector<double> xs){
    double x = -xs[1] / (2*xs[0]);
    return x;
}

int main() {
    vector<double> xs = {1.0, -3.0, 2.0};  // input your coefficients here...
    double solution = find_zero(xs); 
    assert(abs(poly(xs, solution)) < 1e-3);
}