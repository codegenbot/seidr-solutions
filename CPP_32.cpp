double find_zero(vector<double> xs){
    double a = xs[0];
    double b = 0;
    for (int i = 1; i < xs.size(); i++) {
        b += pow(-1, i) * xs[i] / factorial(i);
    }
    return -b / a;
}

double factorial(int n) {
    if(n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n-1);
}