```c++
#include <vector>
#include <cmath>

double poly(std::vector<double> xs, double x){
    double result = xs[0] + xs[1]*x;
    return result;
}

double abs(double x){
    if(x<0) return -x;
    else return x;
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