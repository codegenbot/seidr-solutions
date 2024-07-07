#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double poly(vector<double> coeffs, double x) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(vector<double> xs){
    double sum = 0;
    for (int i = 1; i < xs.size(); i++) {
        if (i % 2 == 0) {
            sum += xs[i] / xs[0];
        }
    }
    return -sum / xs[0];
}

int main() {
    vector<double> coeffs;
    double temp;

    coeffs = {};
    while (true) {
        cin >> temp;
        if (cin.fail()) {
            cout << "Invalid input. Please enter a valid number." << endl;
            break;
        }
        coeffs.push_back(temp);
    }

    if(coeffs.size() == 0){
        cout << "No coefficients entered. Cannot find zero." << endl;
    } else {
        double solution = find_zero(coeffs);
        assert(abs(poly(coeffs, solution)) < 1e-3);
    }
    return 0;
}