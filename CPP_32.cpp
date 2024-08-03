#include <vector>
#include <cmath>

using namespace std;

double poly(const vector<double>& coeffs, double x){
    double result = 0;
    for(int i = 1; i < coeffs.size(); i++){
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(const vector<double>& xs){
    double a = xs[0];
    double b = xs[1];
    return -b/a;
}