#include <vector>
#include <cmath>
#include <cassert>

double poly(const vector<double>& coeffs, double x){
    double sum = 0;
    for (int i = 0; i < coeffs.size(); ++i){
        sum += coeffs[i]*pow(x,i);
    }
    return sum;
}

double find_zero(const vector<double>& xs){
    double a = xs[0];
    double b = xs[1];
    return -b / a;
}

int main(){
    vector<double> coeffs = {1, -3, 2};
    double solution = 0;
    solution = find_zero(coeffs);
    assert(abs(poly(coeffs, solution)) < 1e-3);
    return 0;
}