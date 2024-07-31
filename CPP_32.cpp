int main() {
    int n;
    cin >> n;
    std::vector<double> coeffs = {}; 
    double solution;
    for (int i = 0; i < n; i++) {
        double val;
        cin >> val;
        coeffs.push_back(val);
    }
    solution = find_zero(coeffs); 
    assert(abs(poly(coeffs, solution)) < 1e-3);
    cout << fixed << setprecision(2) << solution << endl;
    return 0;
}