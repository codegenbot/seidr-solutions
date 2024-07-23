#include <vector>
using namespace std;

double find_zero(vector<double> coeffs){
    double x = 1.0; // Initial guess for the zero
    double tol = 1e-9;
    int max_iter = 10000;
    
    for (int i=0; i<max_iter; i++) {
        double fx = poly(coeffs, x);
        if (abs(fx) < tol)
            return x;
        else
            x -= fx / poly(coeffs, x);
    }
    return -1.0; // Failed to converge
}

double poly(vector<double> coeffs, double x){
    double result = 0;
    for (int i=coeffs.size()-1; i>=0; i--) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}