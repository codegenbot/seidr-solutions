double find_zero(vector<double> xs) {
    double initialCoeff;
    vector<double> polyCoeffs;
    int n = xs.size();
    initialCoeff = xs[0];
    for (int i = 1; i < n; i++) {
        if ((i & 1) == 0) {
            polyCoeffs.insert(polyCoeffs.begin(), -initialCoeff*xs[i]);
        } else {
            initialCoeff = xs[i];
        }
    }
    return -initialCoeff / initialCoeff;
}