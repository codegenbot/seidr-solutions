double poly(vector<double> coeffs, double x);

double find_zero(vector<double> xs){
    double a = poly({1, -xs[0]}, 0);
    double b = poly({1, -xs[1]}, 0);
    return -b/a;
}

double poly(vector<double> coeffs, double x){
    double result = 0;
    for(int i = 0; i < coeffs.size(); i++){
        result += coeffs[i] * pow(x, i);
    }
    return result;
}