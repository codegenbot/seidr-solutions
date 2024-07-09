#include <vector>
#include <cmath>

// Assuming this is your polynomial evaluation function
double poly(const std::vector<double>& coeffs, double x) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

// Your original function
double find_zero(std::vector<double> xs) {
    if(xs.size() % 2 != 0) return -1; 
    vector<double> coeffs(xs.begin(),xs.end());
    double root = -poly(coeffs,1)/(2*poly(coeffs,-1));
    return std::round(root);
}