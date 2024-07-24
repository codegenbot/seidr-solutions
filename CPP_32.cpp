double find_zero(vector<double> coeffs){
    double x = 1;
    for (int i = 2; i < coeffs.size(); i += 2) {
        while (poly(coeffs, x) > 0) {
            x -= 0.001;
        }
        while (poly(coeffs, x) < 0) {
            x += 0.001;
        }
    }
    return round(x, 2);
}

double poly(vector<double> coeffs, double x){
    double result = 0;
    for(int i=0; i<coeffs.size(); i++){
        result += coeffs[i] * pow(x, i);
    }
    return result;
}