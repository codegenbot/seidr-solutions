double find_zero(int n) {
    double solution;
    cin >> solution;

    vector<double> coeffs = {};
    for (int i = 0; i <= n; i++) {
        cin >> coeffs.push_back(i);
    }

    double sum = 0.0, temp = 0.0;
    for (int i = 2; i < n+1; i += 2) {
        sum -= coeffs[i/2] * pow(solution, i) / (pow(solution, i+1));
    }
    return -sum / pow(solution, 2);
}