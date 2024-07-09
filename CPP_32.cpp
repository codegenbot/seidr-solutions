#include <vector>
#include <cmath>

std::vector<double> coeffs;

double poly(const std::vector<double>& xs, double x) {
    double sum = 0;
    for (int i = 0; i < xs.size(); ++i) {
        sum += xs[i] * pow(x, i);
    }
    return sum;
}

double find_zero(std::vector<double> xs){
    double x = 1;
    double tol = 1e-6; // tolerance for finding zero
    int max_iter = 1000; // maximum number of iterations
    
    for(int i=0; i<max_iter; i++){
        double f = poly(xs, x);
        
        if(abs(f) < tol){
            return round(x, 2);
        }
        
        x -= f / poly(coeffs, x); // Newton's method
    }
    
    return -1.0; // not found
}