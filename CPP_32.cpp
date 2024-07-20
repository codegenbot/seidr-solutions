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
    if(xs.size() % 2 != 0) return -1; // If the number of coefficients is odd, there's no solution
    double x = 1.0; // Start with a guess
    double tol = 1e-6; // Tolerance for convergence
    int max_iter = 100; // Maximum number of iterations

    for(int i=0; i < max_iter; i++){
        double f = poly(xs, x);
        if(abs(f) < tol) return x;
        double df = xs[1]; // First derivative at x
        for(int j=2; j<xs.size(); j++)
            df *= x;
        x -= f / df;
    }
    return -1; // If the maximum number of iterations is reached, there's no solution
}