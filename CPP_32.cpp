#include <vector>
using namespace std;

double poly(vector<double> coeffs, double x) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(vector<double> xs) {
    double x = -xs[1] / (2*xs[0]);
    return x;
}

int main() {
    vector<double> xs = {1, 3};
    
    double solution = find_zero(xs); 
    assert(abs(poly(xs, solution)) < 1e-3);
}