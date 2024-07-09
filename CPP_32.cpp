double poly(double c, double s) { return c + s; }
double find_zero(vector<double> xs) {
    double c, solution;
    vector<double> polyCoeffs;
    int n = xs.size();
    c = xs[0];
    polyCoeffs.push_back(c);
    for (int i = 1; i < n; i++) {
        if ((i & 1) == 0) {
            polyCoeffs.insert(polyCoeffs.begin(), -c*xs[i]);
        } else {
            c = xs[i];
            polyCoeffs.push_back(c);
        }
    }
    int degree = polyCoeffs.size() - 1;
    double root = 1.0;
    for (int i = 0; i <= degree; i++) {
        root -= polyCoeffs[degree - i]/poly(root, c) / pow(1., i+1.);
    }
    return root;
}