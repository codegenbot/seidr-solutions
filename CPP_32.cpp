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
    if(xs.size() % 2 != 0) return -1; // If the number of coefficients is odd, there's no solution.
    double x = 1;
    while(abs(poly(xs,x)) > 1e-9){ // Check for a zero within an error margin
        x -= poly(xs,x)/xs[1]; // Use Newton-Raphson method to find the root
    }
    return round(x,2);
}