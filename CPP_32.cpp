#include <vector>
#include <cmath>

double poly(vector<double> xs, double x) {
    double sum = 0;
    for(int i = 0; i < xs.size(); i++){
        if(i % 2 == 1) sum += xs[i] * pow(x, i);
        else sum += xs[i];
    }
    return sum;
}

double find_zero(vector<double> coeffs, vector<double> xs){
    if(xs.size() % 2 != 0) return -1; 
    double root = -coeffs[1]/(2*coeffs[0]); 
    return std::round(root);
}