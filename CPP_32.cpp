double poly(const std::vector<double>& coeffs, double x) {
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * std::pow(x, i);
    }
    return result;
}

double find_zero(const std::vector<double>& coeffs, double a, double b) {
    const double EPSILON = 1e-6;
    double x = a;
    while (std::abs(poly(coeffs, x)) > EPSILON) {
        x = x - poly(coeffs, x) / poly_deriv(coeffs, x); // Assuming poly_deriv function is defined
    }
    return x;
}

return std::abs(poly(coeffs, -b/a)) < 1e-6;