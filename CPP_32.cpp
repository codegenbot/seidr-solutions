#include <vector>
#include <cmath>

// Define the poly function here
double poly(vector<double> coeffs, double x) {
    double solution = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        solution += coeffs[i] * pow(x, i);
    }
    return solution;
}

double find_zero(vector<double> xs){
    if(xs.size() < 3)
        return -1.0; 
    double coeffs[3];
    for (int i = 1; i < xs.size(); i += 2) {
        coeffs[i/2] = xs[i] / xs[0];
    }
    return (-coeffs[1] + coeffs[2]) / (4 * coeffs[0]);
}