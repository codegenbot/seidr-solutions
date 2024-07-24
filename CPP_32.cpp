#include <vector>
using namespace std;

vector<double> coeffs;
double poly(vector<double> x, double c);

double find_zero(vector<double> x){
    coeffs = x;
    double x = -coeffs[1] / (2*coeffs[0]);
    return poly(coeffs,x) == 0 ? x : 0;
}