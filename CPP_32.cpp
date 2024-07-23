double poly(vector<double> coeffs, double x) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(vector<double> coeffs) {
    double x = 1.0;
    double tol = 1e-6;
    while(true) {
        double f_x = poly(coeffs, x);
        double f_prime_x = poly({coeffs[1], coeffs[2], coeffs[3] * (x-1), coeffs[4]}, x); // approximate derivative using difference quotient
        x -= f_x / f_prime_x;
        if(abs(f_x) < tol)
            return x;
    }
}

int main() {
    vector<double> coeffs = {1, -7.0, 11, -6, 3}; 
    double solution = find_zero(coeffs); 
    cout << "The root is: " << solution << endl;    
}