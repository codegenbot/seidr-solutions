#include <stdio.h>
#include <math.h>
#include <vector>

using namespace std;

double poly(vector<double> xs, double x) {
    double sum = 0;
    int i;
    for (i = 0; i < xs.size(); i++) {
        sum += xs[i] * pow(x, i);
    }
    return sum;
}

double find_zero(vector<double> xs) {
    double x = 0;
    int n = xs.size();
    double a = xs[n - 1];
    double b = xs[n - 2];

    x = -b / a;

    return x;
}