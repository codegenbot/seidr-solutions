```cpp
double poly(vector<double> coeffs, double x) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(vector<double> coeffs) {
    double x = 1.0;
    const double epsilon = 1e-6;

    while (true) {
        double p = poly(coeffs, x);
        if (abs(p) < epsilon)
            break;
        x -= p / poly({coeffs[0], coeffs[1], coeffs[2]}, x);
    }
    return x;
}

int main() {
    vector<double> coeffs = {3, -12, 12, -4};
    
    double solution = find_zero(coeffs);
    // calculate the polynomial and check if it has a root close to 2.5
    for (double i = 1.5; i < 3.0; i += 0.05) {
        double val = poly(coeffs, i);
        assert(abs(val)< 1e-3); 
    }
}