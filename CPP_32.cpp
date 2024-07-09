#include <vector>
#include <cmath>

double find_zero(vector<double> xs){
    double sum = 0;
    int n = xs.size();
    for (int i = 0; i < n; i++) {
        if (i % 2 == 1) {
            sum += xs[i];
        } else if (i > 0) {
            sum -= xs[i] / pow(xs[0], i/2.0);
        }
    }
    return -sum;
}