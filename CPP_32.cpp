double poly(vector<double> coeffs, double x) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(vector<double> coeffs) {
    double x = 1.0;
    double e = 1e-6;
    while (true) {
        double fx = poly(coeffs, x);
        if (fabs(fx) < e)
            return x;
        double dfx = 0;
        for (int i = 1; i <= coeffs.size(); i++) {
            dfx += i * coeffs[i] * pow(x, i-1);
        }
        x -= fx / dfx;
    }
}

int main() {
    vector<double> coeffs = {1.0, -6.0, 11.0, -6.0, 1.0};
    double solution = 0.0;
    
    // calculate the polynomial and check if it has a root close to 2.5
    for (double i = 1.5; i < 3.0; i += 0.05) {
        double val = poly(coeffs, i);
        assert(abs(val)< 1e-3); 
    }
}