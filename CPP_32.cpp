int main() {
    int n;
    cin >> n;

    // Initialize coeffs vector
    vector<double> coeffs(n);

    for(int i = 0; i < n; i++) {
        cin >> coeffs[i];
    }

    double x;
    cin >> x;

    double solution = find_zero(coeffs, x); 

    cout << fixed << setprecision(6) << find_zero(coeffs, x) << endl;

    assert (abs(find_zero(coeffs, x)) < 1e-3);
}