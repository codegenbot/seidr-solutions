double find_zero(vector<double> xs){
    double a = xs[0];
    double b = 0;
    for (int i = 1; i < xs.size(); i++) {
        if (i % 2 == 1) {
            b += xs[i] / fact(i);
        } else {
            a -= xs[i] / fact(i);
        }
    }
    return -b / a;
}

double fact(int n) {
    double res = 1;
    for (int i = 2; i <= n; i++) {
        res *= i;
    }
    return res;
}