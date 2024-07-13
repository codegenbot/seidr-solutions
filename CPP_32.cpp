double find_zero(vector<double> xs){
    double x = -xs[1]/(2*abs(xs[1]));
    return poly(xs,x);
}