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

double find_zero(vector<vector<double>> coeffs){
    double tol = 1e-6; // tolerance for finding zero
    int max_iter = 1000; // maximum number of iterations
    
    double x = 1;
    
    for(int i=0; i<max_iter; i++){
        vector<double> polyCoeffs = coeffs[0];
        double f = poly(polyCoeffs, x);
        
        if(abs(f) < tol){
            return round(x, 2);
        }
        
        x -= f / poly(coeffs[1], x); // Newton's method
    }
    
    return -1.0; // not found
}