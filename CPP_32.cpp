#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double poly(vector<double> coeffs, double x) {
    double res = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        res += coeffs[i] * pow(x, i);
    }
    return res;
}

double find_zero(vector<double> coeffs) {
    double a = 0, b = 0, c = coeffs[0];
    for(int i=1; i<coeffs.size();i++){
        if(i%2==0) c+=(-1)*coeffs[i]/pow(2,i);
        else a+=coeffs[i]/(double)(i+1);
    }
    return -b/(2*a);
}

int main() {
    vector<double> coeffs;
    double solution;

    int n; // Input the degree of polynomial
    cout << "Enter the degree of polynomial: ";
    cin >> n;
    
    for(int i=0; i<=n;i++){
        double coeff;
        cout << "Enter coefficient for x^" << i << ": ";
        cin >> coeff;
        coeffs.push_back(coeff);
    }

    solution = find_zero(coeffs);
    assert (abs(poly(coeffs, solution))< 1e-3);

    return 0;
}