```cpp
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
    double solution = 0;
    for (int i = 0; i < polyCoeffs.size(); i++) {
        if (i % 2 == 1) {
            solution -= polyCoeffs[i];
        } else {
            solution += polyCoeffs[i];
        }
    }
    return -solution / coeffs;
}