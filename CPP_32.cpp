#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

double poly(vector<double> coeffs, double x){
    double result = 0.0;
    for(int i=0; i<coeffs.size(); i++){
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(vector<double> xs){
    double a = xs[0];
    double b = xs[1];
    return -b/a;
}

int main(){
    vector<double> coeffs = {1, -2, 1}; // Example coefficients for x^2 - 2x + 1 = 0
    double solution;
    solution = find_zero(coeffs);
    assert (abs(poly(coeffs, solution)) < 1e-3);
    return 0;
}