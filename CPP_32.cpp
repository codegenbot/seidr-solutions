#include <vector>
#include <cmath>

double poly(vector<double> coeffs, double x) {
    double result = 0;
    for(int i=0; i<coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

int main() {
    vector<double> coeffs;
    double root;

    int numCoeffs;
    cout << "Enter the number of coefficients: ";
    cin >> numCoeffs;

    for(int i = 0; i < numCoeffs; i++) {
        double coeff;
        cout << "Enter coefficient " << i + 1 << ": ";
        cin >> coeff;
        coeffs.push_back(coeff);
    }

    vector<double> xs(3); // Assuming the equation is a cubic.
    for(int i = 0; i < 3; i++) {
        cout << "Enter x-coordinate " << i + 1 << ": ";
        cin >> xs[i];
    }

    if(xs.size() % 2 != 0) root = -1; 
    else {
        coeffs = {};
        root = -xs[1]/(2*xs[0]);
        solution = std::round(poly(coeffs, root));
    }
    
    cout << "The zero is: " << solution << endl;
    return 0;
}