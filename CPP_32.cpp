double absolute_value(double x){
    return x < 0 ? -x : x;
}

double poly_diff(vector<double> coeffs, double x){
    double result = 0;
    for(int i = 1; i < coeffs.size(); i++){
        result += coeffs[i] * i * pow(x, i - 1);
    }
    return result;
}

double find_zero(vector<double> coeffs){
    double x = 0;
    while(absolute_value(poly(coeffs, x)) > 1e-9){
        x -= poly(coeffs, x) / poly_diff(coeffs, x);
    }
    return x;
}