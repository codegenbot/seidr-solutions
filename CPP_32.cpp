#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

double poly(vector<double> coeffs, double solution) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(solution, i);
    }
    return result;
}

double find_zero(vector<double> xs){
    double sum = 0;
    double coeff = xs[0];
    vector<double> coeffs; 
    for (int i = 1; i < xs.size(); i++) {
        if (i % 2 == 0) {
            sum += xs[i] / coeff;
            coeffs.push_back(coeff); 
        }
        else{
            coeff = xs[i];
        }
    }
    return -sum / coeff;
}

int main() {
    vector<double> xs; // input coefficients
    cout << "Enter coefficients (space separated): ";
    for(double x; cin >> x; xs.push_back(x)); 
    double solution = find_zero(xs);
    assert(abs(poly(find_coefficients(xs), solution)) < 1e-3);
    return 0;
}