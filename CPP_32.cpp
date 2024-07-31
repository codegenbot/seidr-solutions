int main() {
    std::vector<double> coeffs = {1, 0, -1, 1}; // Correctly initialize coeffs with the coefficients of the polynomial
    double solution;
    solution = find_zero(coeffs); // Pass coeffs to find_zero function
    assert(std::abs(poly(coeffs, solution)) < 1e-3);
    
    return 0;
}