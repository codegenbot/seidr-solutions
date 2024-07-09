double poly(std::vector<double> coeffs, double x) {
    double res = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        res += coeffs[i] * pow(x, i);
    }
    return res;
}