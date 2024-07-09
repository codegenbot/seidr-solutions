#include <vector>
#include <cmath>

double poly(std::vector<double> coeffs, double x) {
    double sum = 0;
    for(int i = 0; i < coeffs.size(); i++){
        if(i % 2 == 1) sum += coeffs[i] * pow(x, i);
        else sum += coeffs[i];
    }
    return sum;
}

double find_zero(std::vector<double> coeffs, double x){
    if(coeffs.size() % 2 != 0) return -1; 
    double root = -coeffs[1]/(2*coeffs[0]); 
    return std::round(root);
}

int main() {
    std::vector<double> coeffs = {1.5, -4.25, 3.75};
    double solution;
    for(int i = 0; i < 10; i++) {
        double x = poly(coeffs, (double)i/10);
        assert (abs(x)< 1e-3);
    }
    return 0;
}