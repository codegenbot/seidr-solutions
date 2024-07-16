double find_zero(vector<double> xs){
    double a = xs[0];
    double b = xs[1];
    double discriminant = b * b - 4 * a;
    double x1 = (-b + sqrt(discriminant)) / (2 * a);
    double x2 = (-b - sqrt(discriminant)) / (2 * a);
    
    if (abs(x1) < abs(x2)) {
        return x1;
    } else {
        return x2;
    }
}