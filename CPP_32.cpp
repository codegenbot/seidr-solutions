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
    if (polyCoeffs.size() > 1) {
        double sum = 0.0;
        for (int i = 0; i < polyCoeffs.size(); i++) {
            sum += pow(xs[0],i)*polyCoeffs[i];
        }
        solution = -sum / xs[0];
    } else {
        solution = 0.0;
    }
    return solution;
}