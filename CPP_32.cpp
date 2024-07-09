#include <vector>
#include <cstdlib>

double poly(std::vector<double> coeffs, double x){
    double result = 0.0;
    for(int i=0; i<coeffs.size(); i++){
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double abs(double num){
    return num >= 0 ? num : -num;
}

double find_zero(std::vector<double> coeffs){
    double a = coeffs[0];
    double b = coeffs[1];
    return -b/a;
}

int main() {
    std::vector<double> coeffs = {1, -3, 2}; 
    double solution = find_zero(coeffs); 
    assert(abs(poly(coeffs, solution)) < 1e-3); 
}