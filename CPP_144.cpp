#include <stdio.h>
#include <string>
#include <cmath>
using namespace std;

bool simplify(string x, string n) {
    int x_numerator, x_denominator, n_numerator, n_denominator;
    sscanf(x.c_str(), "%d/%d", &x_numerator, &x_denominator);
    sscanf(n.c_str(), "%d/%d", &n_numerator, &n_denominator);

    double result = (double)x_numerator * n_numerator / (x_denominator * n_denominator);

    return (fabs(result - round(result)) < 1e-9);
}