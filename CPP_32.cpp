```cpp
double find_zero(vector<double> xs) {
    double c;
    vector<double> polyCoeffs;
    int n = xs.size();
    c = xs[0];
    for (int i = 1; i < n; i++) {
        if ((i & 1) == 0) {
            polyCoeffs.push_back(-c*xs[i]);
        } else {
            c = xs[i];
        }
    }
    double solution;
    double poly(double a, double b) { return a + b; };
    for (int i = 2; i < polyCoeffs.size(); ) {
        double p0 = poly(c, -polyCoeffs[1]/c);
        if (abs(p0)<1e-3)
            solution = c;
        else
            c = p0;
        for (int j = 1; j <=i/2; j++)
            polyCoeffs.pop_back();
        i--;
    }
    return solution;
}