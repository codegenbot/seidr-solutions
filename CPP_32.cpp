#include <vector>
#include <cmath>

double poly(std::vector<double> coeffs, double x) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

std::vector<double> abs(std::vector<double> vec) {
    std::vector<double> result(vec.size());
    for (int i = 0; i < vec.size(); i++) {
        result[i] = fabs(vec[i]);
    }
    return result;
}

double find_zero(std::vector<double> xs){
    double x = -xs[1] / (2*xs[0]);
    return poly(xs,x) == 0 ? x : 0;
}

int main() {
    std::vector<double> coeffs; 
    double solution = find_zero(coeffs); 
    assert (poly(coeffs, solution) < 1e-3);
}