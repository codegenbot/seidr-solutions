double find_zero(vector<double> xs){
    double a = xs[0];
    double b = xs[1];
    if (a == 0 && b != 0) {
        return -b / a;
    } else {
        return 0;
    }
}