#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

double find_zero(vector<double> coeffs){
    double sum = 0;
    for (int i = 1; i < coeffs.size(); i++) {
        if (i % 2 == 0) {
            sum += coeffs[i] / coeffs[0];
        }
    }
    return -sum / coeffs[0];
}

double poly(vector<double> coeffs, double x) {
    double result = 0;
    for(int i = 0; i < coeffs.size(); i++) {
        if(i % 2 == 1) {
            result += coeffs[i] * pow(x, (coeffs.size() - 1 - i) / 2.0);
        }
    }
    return result;
}

int main(){
    vector<double> coeffs(4);            
    coeffs[0] = 1.0; coeffs[1] = -7.0; coeffs[2] = 12.0; coeffs[3] = -6.0;
    double solution = find_zero(coeffs);
    if (abs(poly(coeffs, solution)) > 1e-3) {
        cout << "Error: The zero of the polynomial is not accurate." << endl;
    } else {
        cout << "The zero of the polynomial is: " << solution << endl;
    }
    return 0;
}