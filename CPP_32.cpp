#include <iostream>
#include <vector>
#include <cmath>

double find_zero(std::vector<double> xs){
    double sum = 0;
    for (int i = 1; i < xs.size(); i++) {
        if (i % 2 == 0) {
            sum += xs[i] / xs[0];
        }
    }
    return -sum / xs[0];
}

double poly(std::vector<double> coeffs, double solution){
    double result = 0;
    for(int i=0; i<coeffs.size(); i++){
        result += coeffs[i]*pow(solution,i);
    }
    return result;
}

int main() {
    std::vector<double> coeffs;
    coeffs.push_back(1.0); // initialize coeffs vector with values
    coeffs.push_back(-7.0);
    coeffs.push_back(12.0);
    coeffs.push_back(-6.0);

    double solution = find_zero(coeffs);
    
    assert (abs(poly(coeffs, solution))< 1e-3);
    
    return 0;
}