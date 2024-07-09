```cpp
double find_zero(vector<double> xs) {
    vector<double> coeffs;
    int n = xs.size();
    coeffs.push_back(xs[0]);
    for (int i = 1; i < n; i++) {
        if ((i & 1) == 0) {
            coeffs.push_back(-coeffs[0]*xs[i]);
        } else {
            coeffs[0] = xs[i];
        }
    }
    double solution = 0;
    return -coeffs[0] / coeffs[0];
}