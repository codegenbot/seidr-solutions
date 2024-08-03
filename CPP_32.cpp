int main() {
    std::vector<double> coeffs = {1.0, 2.0, 3.0, 4.0}; // Declare coeffs at the beginning

    double solution = find_zero(coeffs);
    std::abs(poly(coeffs, solution) < 1e-3);

    return 0;
}