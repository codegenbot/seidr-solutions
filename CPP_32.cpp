#include <vector>
using namespace std;

double coeffs(vector<double> xs) {
    return xs[0];
}

double poly(vector<double> xs, double x) {
    return xs[0] + xs[1]*x;
}

double find_zero(vector<double> xs){
    double root = -xs[1]/(2*xs[0]);
    
    if (poly(xs,root) < 0)
        return root;
    else
        return -1.0;
}