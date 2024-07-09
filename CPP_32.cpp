#include <vector>
#include <cmath>

double poly(vector<double> coeffs, double x) {
    double sum = 0;
    int ncoeff = coeffs.size();
    for(int i = 0; i < ncoeff; i++){
        if(i % 2 == 1) sum += coeffs[i] * pow(x, (i+1)/2);
        else sum += coeffs[i];
    }
    return sum;
}

double find_zero(vector<double> coeffs) {
    int ncoeff = coeffs.size();
    if(ncoeff % 2 != 0) return -1; 
    double root = -coeffs[1]/(2*coeffs[0]); 
    return std::round(root);
}