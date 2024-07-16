double poly(vector<double>& coeffs, double x);

double find_zero(vector<double> xs);

double poly(vector<double>& coeffs, double x){
    double result = 0;
    for(int i = 0; i < coeffs.size(); i++){
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(vector<double> xs){
    return -xs[0] / xs[1];
}