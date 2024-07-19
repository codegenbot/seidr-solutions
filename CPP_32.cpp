```
double find_zero(int n) {
    double solution;
    cin >> solution;

    vector<double> coeffs(n+1);
    for (int i = 0; i <= n; i++) {
        cin >> coeffs[i];
    }

    double sum = 0;
    for (int i = 2; i < n+1; i += 2) {
        sum -= coeffs[i/2] * pow(solution, i) / (pow(solution, i+1));
    }
    return -sum / pow(solution, 2);
}