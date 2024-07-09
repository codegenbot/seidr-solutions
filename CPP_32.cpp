```cpp
double find_zero(vector<double> xs) {
    int n = xs.size();
    double* coeffs = new double[n];
    coeffs[0] = xs[0];
    for (int i = 1; i < n; i++) {
        if ((i & 1) == 0) {
            coeffs[i/2] = -coeffs[(i-1)/2]*xs[i];
        } else {
            coeffs[i] = xs[i];
        }
    }
    double poly(double c, double s) { return c + s; }
    return coeffs[n/2] / coeffs[0];
}