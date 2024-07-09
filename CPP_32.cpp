double find_zero(vector<double> xs) {
    int n = xs.size();
    double coeffs[100]; // assuming the maximum number of coefficients is 100
    double x = xs[0];
    for (int i = 1; i < n; i++) {
        if ((i & 1) == 0) {
            coeffs[i/2] = -x*xs[i];
        } else {
            x = xs[i];
        }
    }
    return -coeffs[0] / x;
}