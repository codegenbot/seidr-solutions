#include <cmath>
using namespace std;

double find_zero(vector<double> xs) {
    int n = xs.size();
    if (n % 2 != 0)
        return -1; // Check if the number of coefficients is even.
    double x = 1;
    for(int i=0; i<n/2; i++){
        if((xs[i] != 0 && pow(x, 2*i+1) < 0) || (xs[n-i-1] != 0 && pow(x, 2*i+1) > 0))
            x = -pow(x, n/2); // Move the root to the negative side.
    }
    return poly(xs, x);
}