vector<double> coeffs;
double poly(vector<double> xs, double x) {
    double result = 0;
    for (int i = 0; i < xs.size(); i++) {
        result += pow(x, i) * xs[i];
    }
    return result;
}
double find_zero(vector<double> xs){
    double x = 1;
    coeffs = xs;
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