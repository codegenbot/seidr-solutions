#include <vector>
#include <cmath>

double poly(vector<double> coeffs, double x) {
    double result = 0;
    int n = coeffs.size();
    for(int i=0; i<n; i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(vector<double> xs){
    if(xs.size() % 2 != 0) return -1; 
    vector<double> coeffs(xs.size(), 0);
    int n = xs.size();
    for(int i=0; i<n; i++) {
        coeffs[i] = -xs[2*i]/(2*xs[2*i+1]);
    }
    return std::round(poly(coeffs, 0));
}