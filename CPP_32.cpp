double find_zero(vector<double> xs){
    int n = xs.size();
    double a = xs[n/2];
    double b = 0;
    for (int i = 0; i < n/2; i++) {
        b -= xs[i] / a * pow(a, 2*i);
    }
    return -b / (2*a);
}