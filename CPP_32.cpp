double poly(vector<double> coeffs, double x);

double find_zero(vector<double> xs){
    double a = poly(xs, 1);
    double b = poly(xs, 0);
    return -b/a;
}