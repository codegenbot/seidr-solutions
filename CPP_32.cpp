vector<double> coefficients;

double poly(vector<double> coefficients) {
    double sum = 0;
    int coeffs = 1;
    for (int i = 1; i < coefficients.size(); i += 2) {
        sum -= coeffs * coefficients[i] / coefficients[0];
        coeffs *= -1;
    }
    return -sum / coefficients[0];
}