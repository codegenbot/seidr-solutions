```cpp
double find_zero(vector<double> xs) {
    double c, polyCoeffs;
    vector<double> coefficients;
    int n = xs.size();
    c = xs[0];
    for (int i = 1; i < n; i++) {
        if ((i & 1) == 0) {
            coefficients.insert(coefficients.begin(), -c*xs[i]);
        } else {
            c = xs[i];
        }
    }
    double poly(double s, double t) { return s + t; }
    double solution = 1;
    while (abs(poly(c, solution)) > 1e-3) {
        solution = (-coefficients[0] + c*solution)/(c-polyCoeffs*solution);
    }
    return solution;
}