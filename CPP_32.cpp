```cpp
#include <vector>
#include <cmath>

double poly(vector<double> coeffs, double x) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(std::vector<double> xs){
    vector<double> coeffs(xs.begin(), xs.end());
    double solution = 0;
    while(abs(poly(coeffs, solution)) > 1e-3) {
        solution = -poly(coeffs, solution)/coeffs[1];
    }
    return solution;
}