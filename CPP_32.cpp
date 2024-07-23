#include <vector>
using namespace std;

double find_zero(vector<double> xs) {
    double x = -xs[1] / (2*xs[0]);
    return x;
}

int main() {
    vector<double> xs = {1, -7, 12};
    double solution = find_zero(xs); 
    return 0;
}