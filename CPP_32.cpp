double find_zero(vector<double> xs){
    double a = xs[0];
    double b = xs[1];
    double c = xs[2];
    if (xs.size() > 3) {
        for (int i = 3; i < xs.size(); i++) {
            c += (-1) * pow(xs[i], i);
        }
    }
    return -b / (2*c);
}