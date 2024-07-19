int main() {
    std::vector<double> coeffs; // Declare coeffs here
    double coeff;
    while (std::cin >> coeff) {
        coeffs.push_back(coeff);
    }
    
    std::vector<double> solution = find_zero(coeffs); // Declare solution as std::vector<double>
    
    assert(std::abs(poly(coeffs, solution)) < 1e-3);
    
    return 0;
}