#include <vector>
#include <cmath>
using namespace std;

double poly(vector<double> coeffs, double x) {
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(vector<double> coeffs){
    double x = 1.0; // Initial guess
    double tol = 1e-5; // Tolerance
    while (true) {
        double new_x = x - poly(coeffs, x) / poly(coeffs, x);
        if (abs(new_x - x) < tol) break;
        x = new_x;
    }
    return x;
}

int main() {
    vector<double> coeffs = {1, 3, 4}; 
    double solution = find_zero(coeffs);
    assert(abs(poly(coeffs, solution))< 1e-3);  
    return 0;
}