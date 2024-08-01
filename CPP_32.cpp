double find_zero(std::vector<double> coeffs) {
    double epsilon = 1.0e-9;
    double x0 = 0.0;
    double x1 = 1.0;
    
    while (std::abs(poly(coeffs, x1)) > epsilon) {
        double fx0 = poly(coeffs, x0);
        double fx1 = poly(coeffs, x1);
        double x2 = x1 - fx1 * ((x1 - x0) / (fx1 - fx0));
        x0 = x1;
        x1 = x2;
    }
    
    return x1;
}