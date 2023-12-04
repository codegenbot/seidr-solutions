#include <stdio.h>
#include <math.h>
#include <vector>
using namespace std;
double poly(vector<double> xs, double x) {
    // Evaluates polynomial with coefficients xs at point x. return xs[0] + xs[1] * x + xs[1] * x^2 + .... xs[n] * x^n 
    double sum = 0;
    int i;
    for (i = 0; i < xs.size(); i++) {
        sum += xs[i] * pow(x, i);
    }
    return sum;
}
double find_zero(vector<double> xs) {
    // xs are coefficients of a polynomial. find_zero find x such that poly(x) = 0. find_zero returns only one zero point, even if there are many. 
    // Moreover, find_zero only takes list xs having even number of coefficients and largest non-zero coefficient as it guarantees a solution.
    double lowerBound = -100;
    double upperBound = 100;
    while (upperBound - lowerBound > 0.0001) {
        double midpoint = (lowerBound + upperBound) / 2;
        if (poly(xs, midpoint) < 0) {
            lowerBound = midpoint;
        } else {
            upperBound = midpoint;
        }
    }
    return (lowerBound + upperBound) / 2;
}
int main() {
    vector<double> xs = {1, 2}; // f(x) = 1 + 2x
    double root = find_zero(xs);
    printf("The zero of the polynomial is %f\n", root);
    return 0;
}