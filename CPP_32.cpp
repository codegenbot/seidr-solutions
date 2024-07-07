int find_zero(std::vector<double> coeffs) {
    double x = -1;
    while (true) {
        double y = poly(coeffs, x);
        if (std::abs(y) < 1e-3)
            return x;
        x += 0.1;
    }
}

double poly(std::vector<double> coeffs, double x) {
    double result = 0.0;
    for(int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}