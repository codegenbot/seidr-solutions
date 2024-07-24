#include <vector>
using namespace std;

vector<double> coeffs;
double poly(vector<double> x, double c);

double find_zero(vector<pair<double,double>> coefficients){
    vector<double> x(2);
    x[0] = coefficients[1].first;
    x[1] = -coefficients[0].second / (2*coefficients[0].first);
    return poly(x, coefficients[0].first) == 0 ? x[1] : 0;
}