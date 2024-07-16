#include <vector>
#include <cmath>

double find_zero(vector<double> xs){
    vector<double> coeffs = {xs[1], xs[0]};
    return abs(poly(coeffs, 0));
}