double find_zero(vector<double> coefficients) {
    vector<double> xs(2);
    xs[0] = coefficients[0];
    xs[1] = coefficients[1];
    double x = -xs[1] / (2*xs[0]);
    return x;
}

double poly(vector<double> coeffs, double x) {
    double sum = 0.0;
    for(int i=0; i<coeffs.size(); ++i) {
        sum += coeffs[i]*pow(x, i);
    }
    return sum;
}