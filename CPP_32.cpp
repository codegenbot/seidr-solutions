double find_zero(int n) {
    int degree;
    vector<double> coeffs(n+1);
    vector<int> poly(n);

    double solution; // input from user
    cin >> solution;

    double sum = 0;
    for (int i = 2; i < n+1; i += 2) {
        sum -= coeffs[i/2] * pow(solution, i) / (pow(solution, i+1));
    }
    return -sum / pow(solution, 2);
}