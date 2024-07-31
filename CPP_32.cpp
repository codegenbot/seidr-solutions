```cpp
int main() {
    int n;
    cin >> n;
    vector<double> coeffs;  
    for (int i = 0; i < n; i++) {
        double vals;
        cin >> vals;
        coeffs.push_back(vals); 
    }
    double solution = find_zero(coeffs); 
    assert(abs(poly(coeffs, solution)) < 1e-3);
    cout << fixed << setprecision(2) << solution << endl;
    return 0;

}