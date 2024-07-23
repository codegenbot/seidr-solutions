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
    double x;
    
    cout << "Enter coefficients: ";
    for(int i=0; i<5; i++){
        double c;
        cin >> c;
        coeffs.push_back(c);
    }

    double solution = find_zero(coeffs);

    cout << "The zero is at: " << solution << endl;

    return 0;
}