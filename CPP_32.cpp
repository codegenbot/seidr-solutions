double find_zero(vector<double> xs){
    double x = -xs[1] / (2*xs[0]);
    return poly(xs,x) == 0 ? x : 0;
}