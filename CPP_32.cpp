#include <vector>
#include <cmath>

double poly(vector<double> coeffs, double x) {
    double sum = 0;
    for(int i = 0; i < coeffs.size(); i++){
        if(i % 2 == 1) sum += coeffs[i] * pow(x, i);
        else sum += coeffs[i];
    }
    return sum;
}

double find_zero(vector<double> coeffs) {
    if(coeffs.size() % 2 != 0) return -1; 
    double root = -coeffs[1]/(2*coeffs[0]); 
    return std::round(root);
}