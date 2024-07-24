#include <vector>
#include <cmath>

double poly(std::vector<double> coeffs, double x){
    double result = 0;
    for(int i=0; i<coeffs.size(); i++){
        result += coeffs[i] * pow(x,i);
    }
    return abs(result);
}

double find_zero(std::vector<double> xs){
    double x = -xs[1] / (2*xs[0]);
    return poly(xs,x) == 0 ? x : 0;
}

int main() {
    std::vector<double> coeffs; 
    double solution = find_zero(coeffs); 
    assert (abs(poly(coeffs, solution))< 1e-3);
}