```cpp
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double poly(vector<double> coeffs, double x) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(vector<double> coeffs) {
    double x = 1.0;
    double tol = 1e-6;
    int max_iter = 100;

    for (int iter = 0; iter < max_iter; iter++) {
        double fx = poly(coeffs, x);
        if (abs(fx) < tol)
            return x;
        double dx = -fx / coeffs[0];
        x += dx;
    }
    return x;
}

int main() {
    int n;
    cin >> n;
    vector<double> coeffs;  
    for (int i = 0; i < n; i++) {
        double val;
        cin >> val;
        coeffs.push_back(val); 
    }
    double solution = find_zero(coeffs); 
    assert(abs(poly(coeffs, solution)) < 1e-3);
    cout << fixed << setprecision(2) << solution << endl;
    return 0;
}