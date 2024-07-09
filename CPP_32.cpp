```
#include <vector>
#include <cmath>
#include <iostream> 
#include <cassert>
#include <initializer_list>

using namespace std;

vector<double> coeffs;
double coeff;
int n;

double find_zero(vector<double> coeffs);
double poly(vector<double> coeffs, double solution);

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
    cout << "Enter the number of coefficients: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cout << "Enter coefficient " << i+1 << ": ";
        cin >> coeff;
        coeffs.push_back(coeff);
    }

    double solution = find_zero(coeffs); 
    assert(abs(poly(coeffs, solution)) < 1e-3); 
    return 0;
}