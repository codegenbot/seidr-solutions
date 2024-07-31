#include <vector>
using namespace std;

double poly(double x, vector<double> coeffs) {
    double sum = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        sum += coeffs[i] * pow(x, i);
    }
    return sum;
}

double find_zero(vector<double> xs) {
    double sum = 0;
    vector<double> coeffs;
    for (int i = 1; i < xs.size(); i++) {
        if (i % 2 == 0) {
            coeffs.push_back(xs[i] / xs[0]);
        }
    }
    return -poly(1, coeffs);
}