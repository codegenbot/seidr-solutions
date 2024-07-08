#include <vector>
#include <cmath>

double coeffs(vector<double> xs){
    return xs[0];
}

double poly(vector<double> xs){
    return xs[1];
}

double find_zero(vector<double> xs){
    double a = coeffs(xs);
    double b = poly(xs);
    return -b/a;
}