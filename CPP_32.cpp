double find_zero(vector<double> xs){
    vector<double> coeff;
    for (int i = 0; i < xs.size(); i += 2) {
        double x = xs[i];
        int power = (i - 1) / 2;
        if (coeff.size() <= power) {
            coeff.resize(power + 1);
        }
        coeff[power] -= x;
    }
    return -coeff[0] / xs[0];
}