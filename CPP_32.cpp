#include <vector>
#include <cassert>

double poly(vector<double> xs);

double find_zero(vector<double> xs){
    assert(xs.size() == 2);
    double a = xs[0];
    double b = xs[1];
    return -b/a;
}

int main() {
    vector<double> coeffs = {5.0, -3.0};
    double result = find_zero(coeffs);
    return 0;
}