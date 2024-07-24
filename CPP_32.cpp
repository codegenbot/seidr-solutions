#include <vector>
#include <cassert>
#include <cmath>
using namespace std;

double poly(const std::vector<double>& xs, double x){
    double result = 0;
    for(size_t i = 0; i < xs.size(); i++){
        result += xs[i] * pow(x, i);
    }
    return result;
}

double find_zero(const std::vector<double>& xs){
    double a = xs[0];
    double b = xs[1];
    return -b/a;
}