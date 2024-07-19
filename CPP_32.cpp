#include <vector>
#include <cmath>
using namespace std;

double poly(double x, vector<double> coeff){
    double result = 0.0;
    for(int i = 0; i < coeff.size(); i++){
        result += coeff[i] * pow(x, i);
    }
    return result;
}

double find_zero(vector<double> xs, vector<double> coeff){
    double a = poly(xs[0], coeff);
    double b = poly(xs[1], coeff);
    return -b/a;
}