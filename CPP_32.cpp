double find_zero(vector<double> xs) {
    double coeffs = xs[0], s;
    for (int i = 1; i < xs.size(); i++) {
        if ((i & 1) == 0)
            coeffs += -coeffs * xs[i];
        else
            s = xs[i];
    }
    return -coeffs / s;
}