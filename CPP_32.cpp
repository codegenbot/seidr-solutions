int main() {
    int n;
    cin >> n;

    vector<double> coeffs;
    for(int i = 0; i < n; i++) {
        cin >> coeffs.push_back(i);
    }

    double x;
    cin >> x;

    double solution = find_zero(coeffs, x); 

    cout << fixed << setprecision(6) << solution << endl;

    assert (abs(solution) < 1e-3);
}