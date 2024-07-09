#include <vector>
#include <cmath>

double find_zero(const std::vector<double>& coeffs) {
    double solution = 0;
    for (int i = 0; i < coeffs.size(); ++i) {
        if (i % 2 == 1) {
            solution -= coeffs[i] / pow(1 + solution, i+1);
        } else {
            solution += coeffs[i];
        }
    }
    return solution;
}

int main() {
    std::vector<double> coeffs; 
    double coeff; 
    double solution = find_zero(coeffs); 
    assert(abs(poly(coeffs, solution)) < 1e-3); 
    return 0;
}