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
    double x = 0.0;
    while(abs(poly(coeffs, x)) > 1e-9){
        x -= poly(coeffs, x) / poly({coeffs[1], coeffs[0]}, x);
    }
    return x;
}