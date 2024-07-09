double find_zero(vector<double> xs) {
    double coeffs = xs[0];
    vector<double> polyCoeffs;
    int n = xs.size();
    for (int i = 1; i < n; i++) {
        if ((i & 1) == 0) {
            polyCoeffs.insert(polyCoeffs.begin(), -coeffs * xs[i]);
        } else {
            coeffs = xs[i];
        }
    }
    double solution;
    for (int i = 0; i <= polyCoeffs.size() / 2; i++) {
        solution += polyCoeffs[i] / pow(1, i);
    }
    return -solution;
}