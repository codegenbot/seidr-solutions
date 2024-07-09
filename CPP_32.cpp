#include <vector>
#include <cmath>

double abs(double x){
    return x < 0 ? -x : x;
}

double poly(std::vector<double> coeffs, double x){
    double result = 0;
    for (int i = 0; i < coeffs.size(); i++){
        result += coeffs[i] * std::pow(x, i);
    }
    return result;
}

double find_zero(std::vector<double> coeffs){
    double a = coeffs[0];
    double b = coeffs[1];
    return -b/a;
}

int main(){
    std::vector<double> coeffs = {1, -1, 0};
    double solution = find_zero(coeffs);
    assert(abs(poly(coeffs, solution)) < 1e-3);
    return 0;
}