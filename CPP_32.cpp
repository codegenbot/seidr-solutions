#include <vector>
#include <cmath>
#include <cassert>

double poly(const vector<double>& coeffs, double x){
    double result = 0;
    for(int i=0; i<coeffs.size(); i++){
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(const vector<double>& xs){
    assert(xs.size() == 2); // Ensuring vector has exactly 2 elements
    double a = xs[0];
    double b = xs[1];
    if(a != 0){
        return -b/a;
    } else{
        return INFINITY; // In case a is 0, return positive infinity
    }
}