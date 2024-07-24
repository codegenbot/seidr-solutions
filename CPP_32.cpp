#include <vector>
#include <cmath>

double poly(std::vector<double> coeffs, double x){
    double result = 0;
    for(int i=0; i<coeffs.size(); i++){
        result += coeffs[i]*pow(x,i);
    }
    return result;
}

double abs(double x){
    if(x<0) return -x;
    else     return x;
}

std::vector<double> coeffs; 

double find_zero(std::vector<double> xs){
    double x = -xs[1] / (2*xs[0]);
    return poly(xs,x) == 0 ? x : 0;
}