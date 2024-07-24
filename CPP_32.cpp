#include <vector>
using namespace std;

vector<double> coeffs;
double poly(vector<double> x, double c);

double find_zero(vector<double> x) {
    vector<double> coeffs = {x[0], x[1]};
    double x = -coeffs[1] / (2*coeffs[0]);
    return poly(x, coeffs) == 0 ? x : 0;
}