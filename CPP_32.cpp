double poly(vector<double> coeffs, double x) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(vector<double> coeffs) {
    // calculate the zero of a polynomial using its coefficients
    // please implement this logic here...
    double zero = 2.0; // default value for now
    return zero;
}

int main() {
    vector<double> coeffs;
    int ncoeffs;
    cout << "Enter number of coefficients: ";
    cin >> ncoeffs;
    coeffs.resize(ncoeffs);
    
    cout << "Enter coefficients: ";
    for (double &c : coeffs) cin >> c;

    double solution = 0; // initialize solution

    solution = find_zero(coeffs);

    double x = 0;
    while (true) {
        double polyValue = poly(coeffs, x);
        if (polyValue == 0) break;
        x -= polyValue / poly(coeffs, x + 1e-5);
    }

    cout << "The root is: " << solution << endl;

    return 0;
}