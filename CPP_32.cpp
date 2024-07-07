#include <iostream>
#include <vector>
#include <cmath>

int find_zero(const std::vector<double>& coeffs) {
    double x = -coeffs[1] / (2 * coeffs[0]);
    return static_cast<int>(x);
}

int main() {
    int ncoeff; 
    using namespace std;
    vector<double> coeffs;

    cout << "Enter the number of coefficients: ";
    cin >> ncoeff;
    
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
        double sum = 0.0;
        for(int j = 0; j <= i; j++) {
            sum += coeffs[j] * pow(x, j);
        }
        y = sum;
    }

    cout << "The value of y is: " << y << endl;

    int solution = find_zero(coeffs);

    cout << "The zero of the polynomial is: " << solution << endl;

    return 0;
}