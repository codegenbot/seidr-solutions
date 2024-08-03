double find_zero(vector<double> xs){
    double a = xs[0];
    double b = xs[1];
    double c = 2*xs[1] - xs[2];
    double d = 3*bsq(xs) - 4*a*c;
    
    if (d > 0) {
        return (-c + sqrt(d)) / 2.0;
    } else if (d < 0) {
        return (-c - sqrt(-d)) / 2.0;
    } else {
        return -b / (2*a);
    }
    
    double bsq(vector<double> xs) {
        return xs[1]*xs[1] - 3*xs[0]*xs[2] + 2*xs[0]*xs[1];
    }