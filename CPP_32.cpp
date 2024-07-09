#include <vector>
#include <cmath>

double poly(const std::vector<double>& coeffs, double x) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(std::vector<double> xs) {
    vector<double> coeffs(xs.size());
    double root;
    for(int i=0;i<coeffs.size();++i){
        coeffs[i]=pow(-1,i)*xs[i];
    }
    if(poly(coeffs, 1.0) == 0 && poly(coeffs, -1.0) > 0) {
        for(double x=-2.0;x<=2.0;x+=0.01){
            if(poly(coeffs,x)==0) return round(x*100.0)/100.0;
        }
    } else {
        root = find_zero_ternary(xs);
        return std::round(root);
    }
}