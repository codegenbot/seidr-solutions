double find_zero(vector<double> xs){
    double a = xs[0];
    double b = 0;
    for (int i = 1; i < xs.size(); i++) {
        b += xs[i] * pow(i, -1);
    }
    return -b / a;
}