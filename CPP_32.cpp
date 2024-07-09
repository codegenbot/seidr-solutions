```cpp
#include <vector>
#include <cmath>

double poly(std::vector<double> a_coeffs, double x) {
    double sum = 0;
    for (int i = 0; i < a_coeffs.size(); i++) {
        sum += a_coeffs[i] * pow(x, i);
    }
    return sum;
}

double find_zero(std::vector<double> a_xs){
    if(a_xs.size() % 2 != 0) return -1; 
    double root = -(a_xs[1])/(2*a_xs[0]); 
    return std::round(root);
}