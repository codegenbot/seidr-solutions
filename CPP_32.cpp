int main() {
    int n;
    std::cin >> n;
    std::vector<double> coeffs;  
    for (int i = 0; i < n; i++) {
        double val;
        std::cin >> val;
        coeffs.push_back(val); 
    }
    double solution = find_zero(coeffs); 
    assert(abs(poly(coeffs, solution)) < 1e-3);
    std::cout << std::fixed << std::setprecision(2) << solution << std::endl;
    return 0;
}