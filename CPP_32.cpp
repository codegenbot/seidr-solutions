double find_zero(vector<double> xs){
    double root = (-xs[1]) / (2 * xs[2]);
    return round(root, 2);
}