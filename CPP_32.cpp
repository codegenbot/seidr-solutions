
#include <iostream>
#include <vector>
#include <cmath>
using std::allocator;

double poly(const vector<double>& xs, double x) {
    /* Evaluates polynomial with coefficients xs at point x. return xs[0] + xs[1] * x + xs[1] * x^2 + .... xs[n] * x^n */
    double sum = 0;
    int i;
    for (i = 0; i < xs.size(); i++) {
        sum += xs[i] * pow(x, i);
    }
    return sum;
}

double find_zero(const vector<double>& coeffs) {
    /* xs are coefficients of a polynomial. find_zero finds x such that poly(x) = 0. find_zero returns only one zero point, even if there are many. Moreover, find_zero only takes list xs having even number of coefficients and largest non zero coefficient as it guarantees a solution. */
    double x = 0;
    int i;
    for (i = 0; i < coeffs.size(); i++) {
        if (coeffs[i] != 0)
            x += coeffs[i] * pow(x, i);
    }
    return x;
}

int main() {
    std::vector<double> coeffs = {};
    double solution;
    int ncoeff;

    // Read the number of coefficients from the user.
    cin >> ncoeff;

    // Read the coefficients from the user.
    for (int i = 0; i < ncoeff; i++) {
        double coeff;
        cin >> coeff;
        coeffs.push_back(coeff);
    }

    // Find a zero of the polynomial.
    solution = find_zero(coeffs);

    // Check if the solution is correct.
    if (abs(poly(coeffs, solution)) < 1e-3) {
        cout << "The solution is: " << solution << endl;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}