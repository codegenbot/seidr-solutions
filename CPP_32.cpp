#include <vector>
#include <cmath>

int main() {
    std::vector<double> coeffs;

    int ncoeff; 
    cout << "Enter the number of coefficients: ";
    cin >> ncoeff;
    
    for(int i = 0; i < ncoeff; i++) {
        cout << "Enter coefficient " << i+1 << ": ";
        double coeff;
        cin >> coeff;
        coeffs.push_back(coeff);
    }
    
    double x, y;
    cout << "Enter the value of x: ";
    cin >> x;

    find_zero(coeffs, ncoeff, x, y);

    cout << "The value of y is: " << y << endl;

    return 0;
}

void find_zero(std::vector<double> coeffs, int ncoeff, double x, double& y) {
    double poly = 0.0;
    for(int i = 0; i < ncoeff; i++) {
        poly += coeffs[i] * pow(x, i);
    }
    y = poly;
}

double poly(std::vector<double> coeffs, int ncoeff, double x) {
    double poly = 0.0;
    for(int i = 0; i < ncoeff; i++) {
        poly += coeffs[i] * pow(x, i);
    }
    return poly;
}