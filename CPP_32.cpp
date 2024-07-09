double find_zero(vector<double> xs) {
    double coeffs;
    vector<double> polyCoeffs;
    int n = xs.size();
    coeffs = xs[0];
    for (int i = 1; i < n; i++) {
        if ((i & 1) == 0) {
            polyCoeffs.insert(polyCoeffs.begin(), -coeffs*xs[i]);
        } else {
            coeffs = xs[i];
        }
    }
    double poly(double c, double s) { return c + s; }
    return -coeffs / coeffs;
}