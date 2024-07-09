vector<double> coeffs;
double poly(vector<double> xs, double x) {
    double result = 0;
    for (int i = 0; i < xs.size(); i++) {
        result += xs[i] * pow(x, i);
    }
    return result;
}

double find_zero(vector<double> xs){
    vector<double> coeffs = {1,xs[0],xs[1]};
    double root = -coeffs[1]/(2*coeffs[0]);
    
    if (poly(coeffs,root) < 0)
        return root;
    else
        return -1.0; 
}