double find_zero(vector<double> coefficients) {
    double a = coefficients[0];
    double b = coefficients[1];
    double c = -coefficients[2];
    if(a == 0)
        return -c/b;
    else
        return (-b + sqrt(b*b-4*a*c)) / (2 * a);
}

int main() {
    vector<double> coefficients;
    // read input from user and store in coefficients
    
    double solution = find_zero(coefficients);
    
    vector<double> coeffs = {coefficients[0], coefficients[1]} ;  // declare and initialize coeffs
    assert (abs(poly(coeffs, solution))< 1e-3);  
    return 0;
}