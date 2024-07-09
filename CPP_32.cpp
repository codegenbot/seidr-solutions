double find_zero(vector<double> xs) {
    double coeffs = xs[0];
    vector<double> polyCoeffs;
    int n = xs.size();
    for (int i = 1; i < n; i++) {
        if ((i & 1) == 0) {
            coeffs = -coeffs * xs[i];
            polyCoeffs.push_back(coeffs);
        } else {
            coeffs *= xs[i];
        }
    }
    double res = 0;
    for (int i = 0; i < polyCoeffs.size(); i++) {
        if (i % 2 == 1) {
            res -= polyCoeffs[i];
        } else {
            res += polyCoeffs[i];
        }
    }
    return -res / coeffs;
}