#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

double poly(vector<double> coeffs, double x) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(vector<double> coeffs){
    double sum = 0;
    for (int i = 1; i < coeffs.size(); i++) {
        if (i % 2 == 0) {
            sum += coeffs[i];
        } else {
            sum -= coeffs[i];
        }
    }
    return -sum / coeffs[0];
}

void find_and_print_zero() {
    vector<double> poly_coeffs;
    double temp;

    while (true) {
        cin >> temp;
        if (cin.fail()) {
            cout << "Invalid input. Please enter a valid number." << endl;
            break;
        }
        poly_coeffs.push_back(temp);
    }

    if(poly_coeffs.size() == 0){
        cout << "No coefficients entered. Cannot find zero." << endl;
    } else {
        double solution = find_zero(poly_coeffs);
        assert(abs(poly(poly_coeffs, solution)) < 1e-3);
        cout << "The zero of the polynomial is: " << solution << endl;
    }
}

int main() {
    find_and_print_zero();
    return 0;
}