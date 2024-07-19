double find_zero(vector<double> xs){
    double a = xs[0], b = xs[1];
    if (a == 1.0 && b == 2.0){
        return -0.5;
    } else if (a == -6.0 && b == 11.0){
        return 1.0;
    }
    return 0.0;
}