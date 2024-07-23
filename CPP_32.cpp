double poly(vector<double> coeffs, double x) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(vector<double> coeffs) {
    double x = 1.0;
    double epsilon = 1e-6;
    
    while (true) {
        double poly_val = poly(coeffs, x);
        double derivative = 0;
        
        for (int i = 0; i < coeffs.size(); i++) {
            if (i == 0)
                continue;
            derivative += i * coeffs[i] * pow(x, i - 1);
        }
        
        double new_x = x - poly_val / derivative;
        
        if (abs(new_x - x) < epsilon)
            return x;
        x = new_x;
    }
}

int main() {
    vector<double> coeffs; 
    double solution = 0.0;
    
    for (double i = 1.5; i < 3.0; i += 0.05) {
        double val = poly(coeffs, i);
        //assert(abs(val)< 1e-3); // or use find_zero and check the result
    }
}