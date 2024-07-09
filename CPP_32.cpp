double poly(vector<double> coeffs, double x){
    double result = 0.0;
    int power = coeffs.size() - 1;
    for(double coeff : coeffs){
        result += coeff * pow(x, power);
        power--;
    }
    return result;
}

double abs(double x){
    return x >= 0 ? x : -x;
}

double find_zero(vector<double> coeffs){
    double a = coeffs[0];
    double b = coeffs[1];
    return -b/a;
}