int main{
    vector<double> coeffs = {1.0, -7.0, 12.0, -6.0};
    double solution = find_zero(coeffs);
    if (abs(poly(coeffs, solution)) > 1e-3) {
        cout << "Error: The zero of the polynomial is not accurate." << endl;
    } else {
        cout << "The zero of the polynomial is: " << solution << endl;
    }
    return 0;
}