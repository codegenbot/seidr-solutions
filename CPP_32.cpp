```cpp
double poly(double x, vector<double> coefficients) {
    double result = 0;
    for (int i = 0; i < coefficients.size(); i++) {
        result += coefficients[i] * pow(x, i);
    }
    return result;
}

vector<double> get_coefficients() {
    int degree;
    cout << "Enter the degree of the polynomial: ";
    cin >> degree;
    vector<double> coeffs(degree + 1);
    for (int i = 0; i <= degree; i++) {
        cout << "Enter coefficient for x^" << i << ": ";
        cin >> coeffs[i];
    }
    return coeffs;
}

double find_zero(vector<double> coefficients) {
    double sum = 0;
    double coeffs = 1;
    for (int i = 1; i < coefficients.size(); i += 2) {
        sum -= coeffs * coefficients[i] / coefficients[0];
        coeffs *= -1;
    }
    return -sum / coefficients[0];
}

int main() {
    vector<double> coefficients = get_coefficients();
    double x = find_zero(coefficients);
    cout << "The zero of the polynomial is: " << x << endl;
    return 0;
}