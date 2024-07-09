double find_zero(vector<double> xs){
    double a = xs[0], b = 0;
    for (int i = 1; i < xs.size(); i++) {
        if (i % 2 == 1) {
            b += xs[i];
        } else {
            a -= xs[i] / pow(1, i);
        }
    }
    return -b / a;
}