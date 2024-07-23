vector<double> coeffs;
double solution;

double poly(vector<double> coeffs, double root) {
    double result = 0;
    for(int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(root, i);
    }
    return result;
}

double find_zero(vector<double> coeffs) {
    int deg = coeffs.size() - 1;
    double a = coeffs[deg];
    double b = 0.0;

    for(int i = deg; i >= 1; i--) {
        b += pow(-1, i) * coeffs[i] / (double)i;
    }

    return -b / a;
}

int main() {
    coeffs.resize(3); // assuming up to degree 2
    cin >> coeffs[0] >> coeffs[1] >> coeffs[2];
    
    double rootValue = 2.5; // example value

    double result = poly(coeffs, rootValue);
    
    solution = find_zero(coeffs);

    assert(abs(poly(coeffs, solution)) < 1e-3);

    return 0;
}