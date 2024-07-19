#include <vector>
#include <cmath>

double find_zero(vector<double> coeffs, vector<double> poly, double solution) {
    double sum = 0;
    for (int i = 2; i < poly.size(); i += 2) {
        sum -= coeffs[i/2] * pow(solution, i) / (pow(solution, i+1));
    }
    return -sum / pow(solution, 2);
}