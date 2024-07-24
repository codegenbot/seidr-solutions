double find_zero(vector<double> coefficients) {
    double a = coefficients[0];
    double b = coefficients[1];
    double c = -coefficients[2] / (2 * a);
    return (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
}

double poly(vector<double> coeffs, double x){
    double result = 0;
    for(int i=0; i<coeffs.size(); i++){
        result += coeffs[i] * pow(x, i);
    }
    return result;
}