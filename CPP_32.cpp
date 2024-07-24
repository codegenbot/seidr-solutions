#include <iostream>
#include <vector>

double poly(vector<double> c, double x) {
    double result = 0.0;
    for (int i = 0; i < c.size(); i++) {
        result += c[i] * pow(x, i);
    }
    return result;
}

double find_zero(vector<double> coeffs){
    vector<double> xs(2); // Initialize a vector of size 2
    double x = -coeffs[1] / (2*coeffs[0]);
    double solution = poly(coeffs, x); 
    if (solution > 1e-6) { // Check the accuracy of the result
        return find_zero(coeffs); // Recursively call the function until the desired accuracy is reached
    }
    return x;
}