double find_zero(vector<double> xs) {
    vector<double> coeffs;
    int n = xs.size();
    if(n==1)
        return 0;
    for (int i = 1; i < n; i++) {
        if ((i & 1) == 0) {
            coeffs.push_back(-xs[0]*xs[i]);
        } else {
            xs[0] = xs[i];
        }
    }
    double solution = -coeffs[0] / xs[0];
    return solution;
}