double find_zero(vector<double> xs){
    if(xs.size() % 2 != 0) return -1; 
    double root = -xs[1]/(2*xs[0]); 
    return std::round(root);
}

double poly(vector<double> coeffs, double solution) {
    double value = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        value += coeffs[i] * pow(solution, i);
    }
    return value;
}