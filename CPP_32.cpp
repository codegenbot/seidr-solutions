#include <vector>
using namespace std;

vector<double> coeffs;
double poly(vector<double> x, double c);

double find_zero(vector<pair<double, double>> vars){
    double x = -vars[1].second / (2*vars[0].second);
    return poly(vars, x) == 0 ? x : 0;
}