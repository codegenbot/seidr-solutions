double find_zero(vector<double> coefficients) {
    double x = -coefficients[1] / (2 * coefficients[0]);
    return x;
}

double poly(vector<double> coeffs, double x) {
    double result = 0.0;
    for(int i=0; i<coeffs.size(); i++) {
        result += coeffs[i]*pow(x,i);
    }
    return result;
}