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
    if(xs.size() % 2 != 0) return -1; 
    vector<double> coeffs(xs.size(), 0);
    double root = -xs[1]/(2*xs[0]);
    return std::round(poly(coeffs, root));
}