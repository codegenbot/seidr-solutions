vector<double> coeffs;
double poly(vector<double> xs, double x) {
    double result = 0;
    for (int i = 0; i < xs.size(); i++) {
        result += xs[i] * pow(x, i);
    }
    return result;
}

double find_zero(vector<double> xs){
    double root = -xs[1]/(2*xs[0]);
    
    if (poly({xs[0], 1},root) < 0)
        return root;
    else
        return -1.0; 
}