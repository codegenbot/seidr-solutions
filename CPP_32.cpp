double find_zero(vector<double> coefficients) {
    double a = coefficients[0];
    double b = coefficients[1];
    double c = -coefficients[2] / (2 * a);
    return -b / (2 * a);
}

int main() {
    vector<double> coefficients;
    // read input from user and store in coefficients
    
    double solution = find_zero(coefficients);
    
    assert (abs(poly(coefficients, solution)) < 1e-3); 

    return 0;
}