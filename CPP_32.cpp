int main() {
    std::vector<double> coefficients = {1.0, -3.0, -2.0, 4.0};
    
    auto solution = find_zero(coefficients);
    
    assert(std::abs(poly(coefficients, solution)) < 1e-3);
    
    return 0;
}