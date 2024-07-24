double find_zero(vector<double> coefficients) {
    vector<double> coeffs = {coefficients[2], -coefficients[1], coefficients[0]};
    double x = 0;
    for(double i=-10; i<=10; i+=0.01){
        if(abs(poly(coeffs, i))<1e-3){
            return i;
        }
    }
    return -1; // no root found
}

double poly(vector<double> coeffs, double x) {
    double result = 0;
    for(int i=0; i<coeffs.size(); i++){
        result += coeffs[i] * pow(x, i);
    }
    return result;
}