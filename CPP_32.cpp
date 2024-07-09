#include <iostream>
#include <vector>
#include <cmath>

double poly(vector<double> coeffs, double x) {
    double sum = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        sum += coeffs[i] * pow(x, i);
    }
    return sum;
}

double find_zero(vector<double> coeffs){
    vector<double> new_coeffs(coeffs); 
    double root = 1;
    double precision = 0.00001;

    while (true) {
        double poly_val = poly(new_coeffs, root);
        if (abs(poly_val) < precision)
            break;
        root -= poly_val / poly(new_coeffs, root);
    }
    return root;
}

int main() {
    int n; // Number of terms in the polynomial
    cin >> n;

    vector<double> coeffs(n); // Read coefficients
    for (int i = 0; i < n; i++) {
        cin >> coeffs[i];
    }

    double x; // Input value
    cin >> x;
    
    // Call poly function with input values
    double sum = poly(coeffs, x);
    cout << "The polynomial evaluation at x = " << x << " is: " << sum << endl;

    // Calculate the root using find_zero function
    double solution = find_zero(coeffs);

    return 0;
}