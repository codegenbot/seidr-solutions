```cpp
#include <iostream>
#include <vector>
#include <cmath>

double poly(vector<double> coeffs, double x) {
    double result = 0;
    for(int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(vector<vector<double>> &coeffs){
    double x = 1.0;
    double tol = 1e-6; // tolerance for finding zero
    int max_iter = 1000; // maximum number of iterations
    
    for(int i=0; i<max_iter; i++){
        double f = poly(coeffs[0], x);
        
        if(abs(f) < tol){
            return round(x, 2);
        }
        
        x -= f / poly(coeffs, x); // Newton's method
    }
    
    return -1.0; // not found
}

int main() {
    vector<vector<double>> coeffs;
    // add your coefficients here
    // for example:
    coeffs = {{1, 2, 3}}; // a polynomial of the form 1 + 2x + 3x^2
    
    double zero = find_zero(coeffs);
    if(zero == -1.0) {
        std::cout << "Zero not found." << std::endl;
    } else {
        std::cout << "The zero is: " << zero << std::endl;
    }
    
    return 0;
}