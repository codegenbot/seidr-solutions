double find_zero(vector<double> xs){
    double a = xs[0];
    double b = xs[1];
    double c = 0;
    if(xs.size() >= 3) {
        c = xs[2];
    }
    
    double x = (-b + sqrt(pow(b, 2) - 4*a*c)) / (2*a);
    return x;
}