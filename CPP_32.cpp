#include <iostream>
using namespace std;

double find_zero(vector<double> xs) {
    double coeffs = xs[0];
    vector<double> polyCoeffs;
    int n = xs.size();
    
    double polys;
    for (int i = 1; i < n; i++) {
        if ((i & 1) == 0) {
            polyCoeffs.insert(polyCoeffs.begin(), -coeffs*xs[i]);
        } else {
            coeffs = xs[i];
        }
    }

    double result = 0.0;
    for (int i = 0; i < polyCoeffs.size(); i++) {
        if (i == 0) {
            result += polyCoeffs[0];
        } else {
            int j = 1;
            while (j <= i) {
                result += polys(i, j)*polyCoeffs[i-j] * pow(xs[0], j);
                j++;
            }
        }
    }

    return -coeffs / coeffs;
}

double poly(double c, double s) { return c + s; }