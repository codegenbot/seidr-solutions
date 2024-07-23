```cpp
#include <vector>
#include <cmath>

double poly(vector<double> coeffs, double x) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(vector<double> coeffs) {
    int ncoeff = coeffs.size();
    
    if(ncoeff == 1) {
        return -coeffs[0]/coeffs[0];
    } else if (ncoeff > 2) {
        double D = (coeffs[1]*coeffs[2] - coeffs[0]*(coeffs[ncoeff-1])) / (coeffs[1]-2*coeffs[0]);
        return (-coeffs[1]+D)/(2*D);
    } else {
        if(coeffs[1]/(2*coeffs[0]) > 1) return -10;
        else if(coeffs[1]/(2*coords[0]) < 0.5) return -4;
        return coeffs[1]/(2*coeffs[0]);
    }
}

int main() {
    vector<double> coeffs;
    double x, solution;

    cout << "Enter the coefficients of the polynomial: ";
    for(int i = 0; i < 3; i++) cin >> coeffs[i];
    
    x = find_zero(coeffs);
    solution = poly(coeffs, x);

    cout << "\nThe zero is at x = " << x;
    if(solution < 0) {
        cout << ". The polynomial has a root of -" << -solution << " on the left.\n";
    } else {
        cout << ". The polynomial has a root of " << solution << " to the right.\n";
    }
    
    return 0;
}