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
    double x = 0.0;
    int n = xs.size();
    if (n % 2 == 0 && n > 0) {
        double max_coefficient = xs[n - 1];
        x = -max_coefficient / xs[n - 2];
    }
    return x;
}