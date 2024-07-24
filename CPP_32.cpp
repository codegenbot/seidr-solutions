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
    if(xs.size() % 2 != 0) return -1; // return -1 if number of coefficients is odd
    double x = 0, y = 10000; // arbitrary values for initial guess
    while (true) {
        double p = poly(xs,x);
        if (abs(p)<1e-9) return x;
        x -= p/poly(xs,x); // Newton's method to find root
    }
}