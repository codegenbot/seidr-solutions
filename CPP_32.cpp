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
    if(xs.size() % 2 != 0) return -1.0; // If the number of coefficients is odd, there's no real root.
    double x = 1.0;
    while (true) {
        double y = poly(xs,x);
        if(abs(y)<1e-9) return x; // If the absolute value of the polynomial at x is less than 1e-9, we consider it as zero.
        x += 0.01; // Increase x by a small amount and try again
    }
}