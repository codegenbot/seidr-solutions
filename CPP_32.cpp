```cpp
int main() {
    int n, m;
    cin >> n >> m;

    double solution = 0; // Missing input variable added

    vector<double> coeffs(n+1);
    for(int i=0; i<n+1; i++){
        cin >> coeffs[i];
    }
    
    solution = find_zero(coeffs);  // Added input variable
    
    assert (abs(poly(coeffs, solution))< 1e-3);
    
    return 0;
}