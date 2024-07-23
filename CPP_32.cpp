int main() {
    vector<double> coeffs = {1.0, -6.0, 11.0, -6.0, 1.0};
    double solution = 0.0;
    
    // calculate the polynomial and check if it has a root close to 2.5
    for (double i = 1.5; i < 3.0; i += 0.05) {
        double val = poly(coeffs, i);
        assert(abs(val)< 1e-3); 
    }
    
    // calculate the zero of polynomial
    solution = find_zero(coeffs);
}