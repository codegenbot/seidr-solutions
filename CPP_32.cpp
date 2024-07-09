double find_zero(vector<double> xs){
    double a = xs[0]; // Largest non-zero coefficient
    double b = xs[1]; // Second coefficient
    return -b/a;
}