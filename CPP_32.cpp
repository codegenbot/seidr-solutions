#include <vector>
#include <cmath>
#include <cassert>

double poly(const std::vector<double>& coeffs, double x){
    double result = 0.0;
    for(int i=0; i<coeffs.size(); i++){
        result += coeffs[i] * std::pow(x, i);
    }
    return result;
}

bool find_zero(const std::vector<double>& coeffs){
    double a = coeffs[0];
    double b = coeffs[1];
    bool solution = std::abs(poly(coeffs, -b/a)) < 1e-3;
    return solution;
}

int main(){
    std::vector<double> coeffs = {1.0, -2.0, 1.0}; 
    double coeff;
    std::vector<double> new_coeffs;
    for(auto coeff : coeffs){
        new_coeffs.push_back(coeff);
    }
    
    bool solution = find_zero(coeffs);
    assert(solution); 
    
    return 0;
}