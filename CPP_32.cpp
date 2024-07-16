double poly(vector<double> coeffs, double x){
    double result = 0.0;
    for(int i=0; i<coeffs.size(); i++){
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double abs(double x){
    return x >= 0 ? x : -x;
}

double find_zero(vector<double> coeffs){
    double a = coeffs[0];
    double b = coeffs[1];
    double epsilon = 1e-6;
    double x = 0.0;
    
    while(abs(poly(coeffs, x)) > epsilon){
        x -= poly(coeffs, x) / poly({a, b}, x);
    }
    
    return x;
}