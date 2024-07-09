vector<double> coeffs;
double find_zero(vector<double>& xs, vector<double>& coeffs) {
    double sum = 0;
    for (int i = 1; i < xs.size(); i++) {
        if (i % 2 == 0) {
            sum += xs[i] / xs[0];
        }
    }
    return -sum / xs[0];
}

double solution = find_zero(xs, coeffs);
assert (abs(poly(coeffs, solution))< 1e-3);