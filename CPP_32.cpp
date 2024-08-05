double poly(std::vector<double>& coeffs, double x) {
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * std::pow(x, i);
    }
    return result;
}

double find_zero(std::vector<double>& coeffs, double a, double b) {
    return poly(coeffs, -b/a);
}

std::vector<double> coeffs = {2.0, -3.0, 1.0}; // Example coefficients

return std::abs(find_zero(coeffs, a, b)) < 1e-6;