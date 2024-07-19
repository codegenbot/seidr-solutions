double find_zero(vector<double> coeffs) {
    double sum = 0;
    for (int i = 2; i < coeffs.size(); i += 2) {
        sum -= coeffs[i/2] * pow(1, i) / (pow(1, i+1));
    }
    return -sum;
}