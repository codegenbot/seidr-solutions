```cpp
#include <vector>
using namespace std;

vector<double> coeffs;
double poly(vector<double> x, double c);

double find_zero(vector<double> xs){
    vector<double> coeffs = {xs[0], xs[1]};
    double x = -coeffs[1] / (2*coeffs[0]);
    return poly(xs,x) == 0 ? x : 0;
}

double poly(vector<double> x, double c){
    return c + x[0]*c + x[1]*pow(x[0],2);
}