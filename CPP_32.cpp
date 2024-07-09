double find_zero(vector<double> xs) {
    vector<double> coeffs;
    int n = xs.size();
    if (n > 0)
        coeffs.push_back(1);
    for (int i = 1; i < n; i++) {
        if ((i & 1) == 0) {
            coeffs.push_back(-xs[0]*xs[i]);
        } else {
            xs[0] = xs[i];
        }
    }
    double solution = 0;
    int degree = coeffs.size() - 1;
    for (int i = degree; i >= 0; --i)
        solution += coeffs[i] * pow(xs[0], i);
    return solution;
}