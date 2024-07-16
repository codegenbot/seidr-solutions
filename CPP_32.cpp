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
    double a = poly(coeffs, 1.0);
    double b = poly(coeffs, -1.0);
    return -b/a;
}