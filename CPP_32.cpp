double find_zero(vector<double> coefficients) {
    vector<double> coeffs = {coefficients[2], -coefficients[1], coefficients[0]}; 
    double x = -coeffs[1] / (2 * coeffs[0]);
    return x;
}