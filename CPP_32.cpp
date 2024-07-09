#include <vector>
#include <cmath>

double poly(vector<double> coeffs, double x) {
    double result = 0;
    for(int i=0; i<coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(vector<double> xs){
    int n = xs.size();
    if(n % 2 != 0) return -1; 
    vector<double> coeffs(n, 0);
    double root = (-1*coeffs[1])/(2*coeffs[0]);
    return std::round(poly(coeffs, root));
}