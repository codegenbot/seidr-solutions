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
    if(xs.size() % 2 != 0) return -1; // return -1 if the number of coefficients is odd
    double x = -xs[1]/(2*xs[0]);
    double p = poly(xs, x);
    while(abs(p)>1e-6){ 
        x -= p/xs[0];
        p = poly(xs, x);
    }
    return round(x, 10);
}