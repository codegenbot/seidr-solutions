```cpp
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

int main() {
    vector<double> poly_coeffs;

    string temp;
    double val;

    while (true) {
        cin >> temp;
        if (!cin) {
            cout << "Invalid input. Please enter a valid number." << endl;
            break;
        }
        val = stod(temp);
        poly_coeffs.push_back(val);
        if(poly_coeffs.size() >= 1000){ 
            break;  
        }
    }

    if(poly_coeffs.size() == 0){
        cout << "No coefficients entered. Cannot find zero." << endl;
    } else {
        double solution = find_zero(poly_coeffs);
        assert(abs(poly(poly_coeffs, solution)) < 1e-3);
    }
    
    return 0;
}