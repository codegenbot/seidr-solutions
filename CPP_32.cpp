#include <vector>
#include <cassert>

vector<double> coeffs(vector<double> xs){
    vector<double> result;
    result.push_back(xs[0]);
    result.push_back(-xs[1]);
    return result;
}

double find_root(vector<double> xs){
    assert(xs.size() == 2);
    double a = coeffs(xs)[0];
    double b = coeffs(xs)[1];
    return -b/a;
}