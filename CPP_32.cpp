#include <vector>
#include <cmath>

double find_zero(std::vector<double> coeffs) {
    if (coeffs.size() < 2)
        return -1.0;

    double solution = 1.0;
    for (int i = coeffs.size() - 1; i >= 0; --i) {
        solution -= coeffs[i] / std::pow(coeffs[coeffs.size()-1], i);
    }

    return solution;
}