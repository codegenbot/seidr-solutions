```cpp
double find_zero(vector<double> coefficients) {
    double sum = 0;
    int coeff = 1;
    for (int i = 1; i < coefficients.size(); i += 2) {
        sum -= coeff * coefficients[i] / coefficients[0];
        coeff *= -1;
    }
    return -sum / coefficients[0];
}