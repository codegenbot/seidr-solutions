int main() {
    vector<double> xs; 
    cout << "Enter coefficients (space separated): ";
    for(double x; cin >> x; xs.push_back(x)); 
    double solution = find_zero(xs);
    vector<double> coeffs;
    for (int i = 1; i < xs.size(); i++) {
        if (i % 2 == 0) {
            coeffs.push_back(xs[i] / xs[i-1]);
        }
    }
    cout << "The zero of the polynomial is: " << solution << endl;
    return 0;
}