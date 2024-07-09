double find_zero(vector<double> xs) {
    int n = xs.size();
    double coeffs[n];
    for (int i = 0; i < n; i++) {
        if (i == 0)
            coeffs[i] = xs[i];
        else
            coeffs[i] = coeffs[i-1]*xs[i];
    }
    return -coeffs[n-1]/(coeffs[0]);
}