#include <vector>
#include <cmath>
#include <iostream> 
#include <cassert>

using std::cout;
using std::cin;
using std::vector;

vector<double> coeffs;
double coeff;
int n;

void readCoefficients() {
    cout << "Enter the number of coefficients: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cout << "Enter coefficient " << i+1 << ": ";
        cin >> coeff;
        coeffs.push_back(coeff);
    }
}

double find_zero(vector<double> coeffs) {
    double sum = 0.0;
    for (int i = 0; i < coeffs.size(); ++i) {
        sum += coeffs[i] / pow(2, i);
    }
    return -sum;
}

double poly(vector<double> coeffs, double solution) {
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * pow(solution, i);
    }
    return result;
}

int main() {
    readCoefficients();
    double solution = find_zero(coeffs); 
    assert(abs(poly(coeffs, solution)) < 1e-3);
    return 0;
}