#include <vector>
#include <cmath>
#include <cassert>

double myAbs(double num){
    return num >= 0 ? num : -num;
}

double find_zero(std::vector<double> coeffs){
    assert(coeffs.size() >= 2);
    double a = coeffs[0];
    double b = coeffs[1];
    return -b/a;
}