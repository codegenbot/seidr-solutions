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
    if(xs.size() % 2 != 0) return -1; // Return -1 if the number of coefficients is odd
    double x = 1.0;
    while(abs(poly(xs, x)) > 1e-6){ // Use a small value for precision
        x -= poly(xs, x)/poly(vector<double>(xs.begin(), xs.end()), x); // Newton's method
    }
    return round(x, 2);
}