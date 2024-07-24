double find_zero(vector<double> coefficients) {
    vector<double> xs = {1, -coefficients[2], coefficients[0]};
    double x = -xs[1] / (2*xs[0]);
    return x;
}

int main() {
    vector<double> coefficients;
    // read input from user and store in coefficients
    
    double solution = find_zero(coefficients);
    
    assert (abs(poly(coeffs, solution))< 1e-3); 
    return 0;
}