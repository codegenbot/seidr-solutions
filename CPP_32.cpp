\#include <vector>  
\#include <cmath>  
\#include <cassert>  

double my_abs(double num){  
    return num >= 0 ? num : -num;  
}  

double poly(std::vector<double> coeffs, double x){  
    double result = 0.0;  
    for(int i=0; i<coeffs.size(); i++){  
        result += coeffs[i] * pow(x, i);  
    }  
    return result;  
}  

double find_zero(std::vector<double> coeffs){  
    assert(coeffs.size() >= 2);  
    double a = coeffs[0];  
    double b = coeffs[1];  
    return -b/a;  
}  