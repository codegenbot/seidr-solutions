#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

double poly(vector<double> xs, double x) {
    double sum = 0;
    for (int i = 0; i < xs.size(); i++) {
        sum += xs[i] * pow(x, i);
    }
    return sum;
}

double find_zero(vector<double> xs) {
    double low = -1000, high = 1000, mid;
    while (high - low > 1e-6) {
        mid = (low + high) / 2;
        if (poly(xs, mid) * poly(xs, low) <= 0) {
            high = mid;
        } else {
            low = mid;
        }
    }
    return mid;
}