double find_zero(vector<double> xs){
    double x = -xs[0]/xs[xs.size()-1];
    return poly(xs,x);
}