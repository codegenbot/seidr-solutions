double find_zero(vector<double> coefficients) {
    double coeffs = 1;
    double sum = 0;
    for (int i = 1; i < coefficients.size(); i += 2) {
        sum -= coeffs * coefficients[i] / coefficients[0];
        coeffs *= -1;
    }
    return -sum / coefficients[0];
}

double poly(vector<double> coefficients, int n) {
    double result = 0.0;
    for (int i = 0; i <= n; ++i) {
        result += coefficients[i] * pow(2.5, i);
    }
    return result;
}