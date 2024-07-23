#include <vector>
#include <cmath>

double find_zero(std::vector<double> xs){
    double x = -xs[1]/(2*xs[0]);
    return poly(xs,x) == 0 ? x : 0;
}

double poly(std::vector<double> coeffs, double x) {
    double sum = 0.0;
    for(size_t i=0; i<coeffs.size(); ++i){
        sum += coeffs[i] * pow(x,i);
    }
    return sum;
}