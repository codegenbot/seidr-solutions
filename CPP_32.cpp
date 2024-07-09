```cpp
double find_zero(vector<double> xs) {
    double c = xs[0];
    vector<double> polyCoeffs;
    int n = xs.size();
    for (int i = 1; i < n; i++) {
        if ((i & 1) == 0) {
            polyCoeffs.insert(polyCoeffs.begin(), -c*xs[i]);
        } else {
            c = xs[i];
        }
    }
    double sum = 0;
    for (int i = 0, p = c; i < polyCoeffs.size(); i++, p *= -1) {
        sum += p * polyCoeffs[i];
    }
    return -c / sum;
}