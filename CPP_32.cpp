double find_zero(vector<double> xs){
    double zero;
    if (xs.size() % 2 == 1) {
        return 0; 
    }
    if (xs[xs.size() - 1] == 0) {
        return 0;
    }
    if (xs.size() == 2) {
        return -xs[0] / xs[1];
    }
    if (xs.size() == 4) {
        double a = xs[0];
        double b = xs[1];
        double c = xs[2];
        double d = xs[3];
        double disc = b*b - 3*a*c;
        double q = (b + (b > 0 ? 1 : -1) * sqrt(disc)) / -2;
        zero = q / a;
    }
    return zero;
}