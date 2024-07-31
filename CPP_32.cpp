double poly(const vector<double>& xs, double x) {
    double result = 0.0;
    for (size_t i = 0; i < xs.size(); i++) {
        result += xs[i] * pow(x, xs.size() - 1 - i);
    }
    return result;
}

double find_zero(const vector<double>& xs) {
    double solution = 0.0;
    if (xs.size() == 2) {
        solution = -xs[0] / xs[1];
    }
    return solution;
}

int main() {
    vector<double> coeffs = {1.0, -2.0, 1.0}; // Example coefficients
    double solution = find_zero(coeffs);
    assert(abs(poly(coeffs, solution)) < 1e-3);
    return 0;
}