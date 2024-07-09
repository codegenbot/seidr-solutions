#include <vector>
#include <cmath>

double poly(const std::vector<double>& xs, double x) {
    double result = xs[0] + xs[1] * x;
    return result;
}

double find_zero(std::vector<double> xs){
    if (xs.size() != 2) {
        return -1.0; 
    }
    
    double sum = 0;
    double root = -xs[1]/(2*xs[0]);
    
    if (poly(xs,root) < 0)
        return root;
    else
        return -1.0; 
}