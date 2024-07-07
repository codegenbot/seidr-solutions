#include <iostream>
#include <cmath>
using namespace std;

double poly(vector<double> coeffs, double x) {
    double result = 0.0;
    for(int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

int find_zero(vector<double> coeffs) {
    double x = -1.0;
    while(true) {
        double y = poly(coeffs, x);
        if(std::abs(y) < 1e-3)
            return x;
        x += 0.1;
    }
}

int main() {
    int ncoeff;
    vector<double> coeffs;

    cout << "Enter the number of coefficients: ";
    cin >> ncoeff;
    
    coeffs.clear();

    for(int i = 0; i < ncoeff; i++) {
        double coeff;
        cout << "Enter coefficient " << i+1 << ": ";
        cin >> coeff;
        coeffs.push_back(coeff);
   }
    
    double x, y;
    cout << "Enter the value of x: ";
    cin >> x;

    for(int i = 0; i < ncoeff; i++) {
        double result = 0.0;
        for(int j = 0; j <= i; j++) {
            result += coeffs[j] * pow(x, j);
        }
        y = result;
    }

    cout << "The value of y is: " << y << endl;

    int solution = find_zero(coeffs);

    cout << "The zero of the polynomial is: " << solution << endl;

    assert(std::abs(poly(coeffs, solution)) < 1e-3);
    
    return 0;
}