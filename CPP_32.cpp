double find_zero(const vector<double>& coeffs) {
    double x = 0.0; // Initial guess
    while (fabs(poly(coeffs, x)) > 1e-9) {
        x -= poly(coeffs, x) / poly({poly(coeffs, 1), poly(coeffs, 0)}, x); // Newton's method
    }
    return x;
}

int main() {
    vector<double> coeffs = {1, -2, 1};
    double solution = find_zero(coeffs);
    cout << "Solution: " << solution << endl;
    return 0;
}