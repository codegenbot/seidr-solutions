#include <vector>
using namespace std;

double poly(vector<double> coeffs, double x) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(vector<double> coeffs){
    double x = 1.0;
    double tolerance = 1e-3;
    while (true) {
        double fx = poly(coeffs, x);
        if (abs(fx) < tolerance) {
            return x;
        }
        double fx_prime = 0;
        for (int i = 1; i < coeffs.size(); i++) {
            fx_prime += i * pow(x, i-1) * coeffs[i];
        }
        x -= fx / fx_prime;
    }
}

int main() {
    vector<double> coeffs = {1, -7.5, 11.0, -3.5};
    double solution = find_zero(coeffs);
    assert(abs(poly(coeffs, solution)) < 1e-3); 
    return 0;
}