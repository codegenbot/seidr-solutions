```cpp
#include <iostream>
#include <vector>
#include <cmath>

double find_zero(std::vector<double> coeffs){
    double sum = 0;
    for (int i = 1; i < coeffs.size(); i++) {
        if (i % 2 == 0) {
            sum += coeffs[i] / coeffs[0];
        }
    }
    return -sum / coeffs[0];
}

double poly(std::vector<double> coeffs, double x) {
    double result = 0;
    for(int i = 0; i < coeffs.size(); i++) {
        if(i % 2 == 1) {
            result += coeffs[i] * pow(x, (coeffs.size() - 1 - i) / 2.0);
        }
    }
    return result;
}

int main(){
    std::vector<double> coeffs = {1.0, -7.0, 12.0, -6.0};
    double solution = find_zero(coeffs);
    assert (abs(poly(coeffs, solution)) < 1e-3); 
    return 0;
}