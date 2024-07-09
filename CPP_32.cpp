```cpp
double find_zero(vector<double> xs) {
    int n = xs.size();
    double coeffs;
    vector<double> polyCoeffs;

    coeffs = xs[0];
    
    for (int i = 1; i < n; i++) {
        if ((i & 1) == 0) {
            polyCoeffs.insert(polyCoeffs.begin(), -coeffs*xs[i]);
        } else {
            coeffs = xs[i];
        }
    }

    return -coeffs / coeffs;
}

double poly(double c, double s) { return c + s; }