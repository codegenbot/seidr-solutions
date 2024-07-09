double absolute(double x){
    return x < 0 ? -x : x;
}

double poly_diff(vector<double> coeffs, double x){
    double result = 0;
    for(int i = 1; i < coeffs.size(); i++){
        result += i * coeffs[i] * pow(x, i - 1);
    }
    return result;
}

double find_zero(vector<double> coeffs){
    double x = 0;
    while(absolute(poly(coeffs, x)) > 1e-9){
        x -= poly(coeffs, x) / poly_diff(coeffs, x);
    }
    return x;
}

// Example Usage
vector<double> coeffs = {1, -3, 2}; // Coefficients for x^2 - 3x + 2
double zero = find_zero(coeffs);
cout << "Zero found at: " << zero << endl;