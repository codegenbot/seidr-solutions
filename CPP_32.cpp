#include <cmath>
#include <vector>

double poly(double coeffs, double solution) {
    // your polynomial calculation here
}

double find_zero(vector<double> xs){
    double coeffs = 1.0; 
    vector<double> poly;
    int n = xs.size();
    for (int i = 1; i < n; i++) {
        if ((i & 1) == 0) {
            poly.push_back(-coeffs*xs[i]);
        } else {
            coeffs = xs[i];
        }
    }
    return -coeffs / coeffs;
}