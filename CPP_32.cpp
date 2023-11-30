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
    double x;
    if (xs.size() == 2) {
        x = -xs[0] / xs[1];
    } else {
        x = 0;
    }
    return x;
}