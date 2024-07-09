```cpp
double find_zero(vector<double> xs){
    double coeffs[3];
    for (int i = 1; i < xs.size(); i += 2) {
        coeffs[i/2] = xs[i] / xs[0];
    }
    return (-coeffs[1] + coeffs[2]) / (4 * coeffs[0]);
}