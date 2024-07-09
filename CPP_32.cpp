double find_zero(vector<double> xs) {
    double coeff = 0;
    for (int i = 1; i < xs.size(); i += 2) {
        double x = xs[i];
        int power = (i - 1) / 2;
        coeff -= x * pow(xs[0], power);
    }
    return -coeff;
}