```
double poly(double x, vector<double> xs){
    double res = 0;
    for(int i=0; i<xs.size(); i++){
        res += xs[i] * pow(x, i);
    }
    return res;
}

double find_zero(vector<double> xs){
    if(xs.size() % 2 != 0) return -1; 
    double root = -poly(0.5, xs)/(2*xs[0]); 
    return std::round(root);
}