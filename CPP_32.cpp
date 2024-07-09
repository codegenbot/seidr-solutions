#include <iostream>
#include <vector>

std::vector<double> poly(std::vector<double> xs) {
    std::vector<double> coeffs;
    // your logic here to calculate polynomial coefficients from input vector
    return coeffs;
}

double find_zero(const std::vector<double>& xs){
    if(xs.size() % 2 != 0) return -1; 
    double root = -xs[1]/(2*xs[0]); 
    return std::round(root);
}