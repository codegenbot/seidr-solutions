#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

double poly(vector<double> xs, double x){
    double sum=0;
    int i;
    for (i=0;i<xs.size();i++)
    {
        sum+=xs[i]*pow(x,i);
    }
    return sum;
}

double find_zero(vector<double> xs){
    if(xs.size() % 2 != 0) return -1; // Check if the number of coefficients is even
    double x = 1.0; // Start with an initial guess
    for(int i=0; i<10000; i++) { // Run up to 10,000 iterations
        double f = poly(xs, x);
        if(abs(f) < 1e-6) return x; // Check if the function value is close enough to zero
        x -= f / (poly({1},x)); // Update the guess using Newton's method
    }
    return -1; // If no solution is found after 10,000 iterations, return -1
}