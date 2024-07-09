double poly(double c, double s) { 
    return c + s; 
}

double find_zero(vector<double> xs) {
    vector<double> polyCoeffs; // changed to double
    double c;
    int n = xs.size();
    c = xs[0];
    for (int i = 1; i < n; i++) { 
        if ((i & 1) == 0) {
            polyCoeffs.insert(polyCoeffs.begin(), -c*xs[i]);
        } else {
            c = xs[i];
        }
    }
    double solution;
    if (!polyCoeffs.empty()) {
        polynomial p(polyCoeffs);
        solution = -p.find_zero();
    } 
    assert (abs(poly(c, solution)) < 1e-3);
    return -c / c;
}