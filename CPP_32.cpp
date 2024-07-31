int main() {
    std::vector<double> coeffs;
    
    // Read coefficients from the user
    double coeff;
    while (std::cin >> coeff) {
        coeffs.push_back(coeff);
    }

    double solution = find_zero(coeffs);
    assert(std::abs(poly(coeffs, solution)) < 1e-3);
    
    return 0;
}