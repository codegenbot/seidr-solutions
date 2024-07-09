double find_zero(vector<double> xs){
    double a = xs[0];
    double b = 0;
    for (int i = 1; i < xs.size(); i += 2) {
        b -= xs[i] / pow(xs[i-1], i/2);
    }
    return -b / a;
}