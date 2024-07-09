```cpp
double find_zero(vector<double> coeffs){
    double sum = 0;
    for (int i = 1; i < coeffs.size(); i++) {
        if (i % 2 == 0) {
            sum -= coeffs[i] / coeffs[0];
        }
    }
    return -sum / coeffs[0];
}