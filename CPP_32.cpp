#include <vector>
#include <cmath>
#include <iostream>

double poly(vector<double> coeffs, double root) {
    double result = 0;
    for(int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(root, i);
    }
    return result;
}

double find_zero(std::vector<double>& coeffs){
    double sum = 0;
    for(auto &coeff : coeffs) {
        sum += coeff;
    }
    return sum / coeffs.size();
}

int main() {
    std::vector<double> coeffs;
    double solution;

    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        double c;
        cin >> c;
        coeffs.push_back(c);
    }

    solution = find_zero(coeffs);

    cout << "Solution is: " << solution << endl;
    cout << "Value of the polynomial at " << solution << " is: " << poly(coeffs, solution) << endl;

    return 0;
}