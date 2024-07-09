int main {
    cout << "Enter the number of coefficients: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cout << "Enter coefficient " << i+1 << ": ";
        cin >> coeff;
        coeffs.push_back(coeff);
    }

    double solution = find_zero(coeffs); 
    assert(abs(poly(coeffs, solution)) < 1e-3);
}