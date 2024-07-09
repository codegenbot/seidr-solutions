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

double find_zero(vector<double> coeffs){
    double x = 1;
    double tol = 1e-6; // tolerance for finding zero
    int max_iter = 1000; // maximum number of iterations
    
    vector<double> xs(coeffs); // assuming coeffs is the vector of coefficients
    
    for(int i=0; i<max_iter; i++){
        double f = poly(xs, x);
        
        if(abs(f) < tol){
            return round(x, 2);
        }
        
        x -= f / (poly(xs, x)); 
    }
    
    return -1.0; // not found
}

int main() {
    int n;
    std::cout << "Enter the number of coefficients: ";
    std::cin >> n;
    vector<double> coeffs(n);
    for(int i = 0; i < n; i++){
        std::cout << "Enter coefficient " << (i+1) << ": ";
        std::cin >> coeffs[i];
    }
    
    double result = find_zero(coeffs);
    if(result != -1.0)
        std::cout << "The zero of the polynomial is: " << result << endl;
    else
        std::cout << "The polynomial does not have a zero." << endl;
    
    return 0;
}