double find_zero(vector<double> coeffs, vector<double> xs){
    double x = 1;
    for (int i = 2; i < xs.size(); i += 2) {
        while (poly(coeffs, x, xs) > 0) {
            x -= 0.001;
        }
        while (poly(coeffs, x, xs) < 0) {
            x += 0.001;
        }
    }
    return round(x, 2);
}

double poly(vector<double> coeffs, double x, vector<double> xs) {
    double result = 0;
    for(int i=0; i<coeffs.size();i++) {
        result += coeffs[i]*pow(x-xs[i],3);
    }
    return result;
}