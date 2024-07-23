double poly(vector<double> coeffs, double x) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(vector<double> coeffs) {
    // implement your zero finding logic here...
    // For example:
    double x = -1.0;
    while (abs(poly(coeffs, x)) > 1e-9) {
        x -= poly(coeffs, x) / poly(coeffs, x + 1e-8);
    }
    return x;
}

int main() {
    vector<double> coeffs;
    // fill coeffs...
    
    double solution = 0; 
    solution = find_zero(coeffs);

    cout << "The zero of the polynomial is: " << solution << endl;

    return 0;
}