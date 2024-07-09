double find_zero(vector<double> xs){
    if(xs.size() % 2 != 0) return -1; // Return -1 if number of coefficients is odd
    double root = -xs[1]/(2*xs[0]); 
    return std::round(root);
}

double poly(vector<double> xs, double solution) {
    double value = 0;
    for (int i = 0; i < xs.size(); i++) {
        value += xs[i] * pow(solution, i);
    }
    return value;
}