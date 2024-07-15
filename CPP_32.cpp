#include <vector>
#include <cmath>
#include <cassert>
using namespace std;

double poly(const std::vector<double>& coeffs, double x){
    double sum = 0;
    for (int i = 0; i < coeffs.size(); ++i){
        sum += coeffs[i]*pow(x,i);
    }
    return sum;
}

double find_zero(const std::vector<double>& xs){
    double a = xs[0];
    double b = xs[1];
    return -b / a;
}