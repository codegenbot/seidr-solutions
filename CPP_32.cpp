double find_zero(vector<double> xs){
    double a = xs[0];
    double b = xs[1];
    double discriminant = b * b - 4 * a;
    double x = (-b + sqrt(discriminant)) / (2 * a);
    return x;
}