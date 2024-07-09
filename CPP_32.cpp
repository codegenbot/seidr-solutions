double find_zero(vector<double> coeffs){
    double result = 0;
    for (int i = 1; i < coeffs.size(); i++)
        result += coeffs[i] * pow(coeffs[0], i);
    return -result / coeffs[0];
}