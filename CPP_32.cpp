#include <vector>
#include <cmath>
#include <cassert>

double poly(const vector<double>& x, const vector<double>& coefficients) {
    double result = 0.0;
    for (size_t i = 0; i < coefficients.size(); ++i) {
        result += coefficients[i] * std::pow(x[0], i);
    }
    return result;
}

vector<double> find_zero(const vector<double>& coefficients);

int main() {
    vector<double> coefficients;
  
    for (double coeff : {1.0, -3.0, -2.0, 4.0}) {
        coefficients.push_back(coeff);
    }
    
    auto solution = find_zero(coefficients);
    
    assert(std::abs(poly(coefficients, solution)) < 1e-3);
    
    return 0;
}

vector<double> find_zero(const vector<double>& coefficients) {
    vector<double> zeros;
    return zeros;
}