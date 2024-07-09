vector<double> poly = {{1,2},{3,4}}; 
double find_zero(vector<double> coeffs) {
    double x = coeffs[1] / coeffs[0];
    return x;
}