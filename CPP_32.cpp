```cpp
#include <cmath>
#include <vector>

double poly(vector<double> coeffs, double x) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(vector<double> xs) {
    vector<double> coeffs(xs.begin(), xs.end()); 
    double x = -xs[1]/(2*abs(xs[1]));
    return poly(coeffs, x);
}