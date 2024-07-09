```
double find_zero(vector<double> xs) {
    double coeffs = xs[0];
    vector<double> polyCoeffs;
    int n = xs.size();
    for (int i = 1; i < n; i++) {
        if ((i & 1) == 0) {
            coeffs *= -xs[i];
            polyCoeffs.insert(polyCoeffs.begin(), coeffs);
        } else {
            coeffs = xs[i];
        }
    }
    double res = coeffs;
    for (double c : polyCoeffs) {
        res /= (c + res);
    }
    return res;
}