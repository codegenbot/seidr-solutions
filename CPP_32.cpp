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
    double a = xs[0];
    double b = 0.0;
    double c = 0.0;

    if(xs.size() > 1) b = xs[1];
    if(xs.size() > 2) c = xs[2];

    double d = b*b - 4*a*c;
    
    if(d < 0)
        return -1; // No real roots
    else if(d == 0)
        return (-b)/(2*a);
    else {
        double t = sqrt(d);
        return ( (-b+t) / (2*a) );
    }
}