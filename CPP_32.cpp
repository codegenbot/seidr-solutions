double find_zero(vector<double> xs){
    double coeffs;
    vector<double> poly;
    int n = xs.size();
    coeffs = xs[0];
    for (int i = 1; i < n; i++) {
        if ((i & 1) == 0) {
            polys.insert(poly.begin(), -coeffs*xs[i]);
        } else {
            coeffs = xs[i];
        }
    }
    return -coeffs / coeffs;
}