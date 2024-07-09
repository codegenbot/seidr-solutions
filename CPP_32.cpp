#include <vector>

using namespace std;

double poly(double c, double s) {
    return c + s;
}

double find_zero(vector<double> xs) {
    double coeffs = xs[0];
    vector<double> polyCoeffs;
    int n = xs.size();
    for (int i = 1; i < n; i++) {
        if ((i & 1) == 0) {
            polyCoeffs.insert(polyCoeffs.begin(), -coeffs*xs[i]);
        } else {
            coeffs = xs[i];
        }
    }
    return -coeffs / coeffs;
}