#include <iostream>
using namespace std;

double find_zero(double coeffs[], int ncoeff) {
    double zero = -coeffs[1] / coeffs[0];
    return zero;
}

int abs(int x) {
    if (x >= 0)
        return x;
    else
        return -x;
}

double poly(double x, double coeffs[], int ncoeff) {
    double result = 0.0;
    for (int i = 0; i < ncoeff; i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

int main() {
    int ncoeff;
    cout << "Enter the number of coefficients: ";
    cin >> ncoeff;

    double coeffs[ncoeff];
    for (int i = 0; i < ncoeff; i++) {
        cout << "Enter coefficient " << i + 1 << ": ";
        cin >> coeffs[i];
    }

    double x;
    cout << "Enter the value of x: ";
    cin >> x;

    double zero = find_zero(coeffs, ncoeff);
    double p = poly(x, coeffs, ncoeff);

    if (x == zero) {
        cout << "The polynomial is 0 at x = " << x << endl;
    } else {
        cout << "The value of the polynomial at x = " << x << " is: " << p << endl;
    }

    return 0;
}