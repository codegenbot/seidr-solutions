double poly(vector<double> coeffs, double x){
    double result = 0;
    for(int i = 0; i < coeffs.size(); i++){
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double abs(double x){
    return x < 0 ? -x : x;
}

vector<double> coeffs = {1, -3, 2}; // Example coefficients for x^2 - 3x + 2

double find_zero(vector<double> coeffs){
    double x = 0;
    while(abs(poly(coeffs, x)) > 1e-9){
        x -= poly(coeffs, x) / poly_diff(coeffs, x);
    }
    return x;
}

// Example Usage
double zero = find_zero(coeffs);
cout << "Zero found at: " << zero << endl;