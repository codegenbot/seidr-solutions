```cpp
vector<double> coefficients;

double find_zero(vector<double> coeffs) {
    double sum = 0;
    double coeffsSign = 1;
    for (int i = 1; i < coeffs.size(); i += 2) {
        sum -= coeffsSign * coeffs[i] / coeffs[0];
        coeffsSign *= -1;
    }
    return -sum / coeffs[0];
}