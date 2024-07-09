```cpp
#include <vector>
using namespace std;

double poly(vector<double> xs, double x) {
    double sum = 0;
    for (int i = 1; i < xs.size(); i += 2) {
        sum += coeffs[i / 2] * pow(x, i);
    }
    return sum;
}

double find_zero(vector<double> xs){
    double coeffs[3];
    for (int i = 1; i < xs.size(); i += 2) {
        coeffs[i/2] = xs[i] / xs[0];
    }
    double x = (-coeffs[1] + pow(coeffs[2], 2)) / (4 * coeffs[0] - 2 * coeffs[1]);
    return x;
}