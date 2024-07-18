double poly(vector<double> coeffs, double x){
    double result = 0.0;
    for(int i=0; i<coeffs.size(); i++){
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(vector<double> coeffs){
    double a = coeffs[0];
    double b = coeffs[1];
    const double epsilon = 1e-6;
    double x = 0.0;
    while(fabs(poly(coeffs, x)) > epsilon){
        x += 0.1;
    }
    return x;
}