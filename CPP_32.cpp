double find_zero(vector<double> xs){
    double x = -xs[0]/xs[xs.size()-1]; // assuming largest non zero coefficient guarantees a solution
    return poly(xs,x);
}