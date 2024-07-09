double poly(double x, vector<double> xs){
    double res = 0;
    for(int i=0; i<xs.size(); i++){
        res += xs[i]*pow(x, i);
    }
    return -res/xs[1];
}

double find_zero(vector<double> xs){
    if(xs.size() % 2 != 0) return -1; 
    double root = poly(-xs[1]/(2*xs[0]), xs);
    return std::round(root);
}