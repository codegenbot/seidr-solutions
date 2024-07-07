int main() {
    vector<double> poly_coeffs = {};

    string temp;
    double val;

    while (true) {
        cin >> temp;
        if (!cin) {
            cout << "Invalid input. Please enter a valid number." << endl;
            break;
        }
        val = stod(temp);
        poly_coeffs.push_back(val);
    }

    if(poly_coeffs.size() == 0){
        cout << "No coefficients entered. Cannot find zero." << endl;
    } else {
        double solution = find_zero(poly_coeffs);
        assert(abs(poly(poly_coeffs, solution)) < 1e-3);
    }
    
    return 0;
}