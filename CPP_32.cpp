int main() {
    std::vector<double> coeffs = {1, 0, -1}; // Initialize coeffs properly
    double solution;
    solution = find_zero(coeffs); // Pass coeffs to find_zero function
    assert(std::abs(poly(coeffs, solution)) < 1e-3);
    
    return 0;
}