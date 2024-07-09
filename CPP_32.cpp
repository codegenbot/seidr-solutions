double find_zero(vector<double> xs){
    int n = xs.size();
    double x = -xs[1]/(2*xs[0]);
    return poly(xs,x);
}