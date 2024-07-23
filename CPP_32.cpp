#include <vector>
using namespace std;

double poly(vector<double> xs, double x) {
    return xs[0] + xs[1]*x;
}

double find_zero(vector<double> xs){
    double x = -xs[1] / (2*xs[0]);
    return x;
}

int main() {
    vector<double> xs;
    xs.push_back(1); // coefficient of x^2
    xs.push_back(-4); // coefficient of x
    xs.push_back(3);  // constant term

    double solution = find_zero(xs);
    assert(abs(poly(xs, solution)) < 1e-3);
}