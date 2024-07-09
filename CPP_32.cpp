double find_zero(vector<double> coeffs, double& coeff){
    int n = coeffs.size();
    double a = coeff;
    double b = 0;
    for (int i = 0; i < n/2; i++) {
        b -= coeffs[i] / a * pow(a, 2*i);
    }
    return -b / (2*a);
}