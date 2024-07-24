```cpp
#include <vector>
using namespace std;

vector<double> coeffs;
double poly(vector<double> x, double c);

double find_zero(vector<pair<double,double>> xys){
    vector<double> coeffs({xys[0].second, -4*xys[0].first, 2});
    double x = -coeffs[1] / (2*coeffs[0]);
    return poly(x, coeffs) == 0 ? x : 0;
}