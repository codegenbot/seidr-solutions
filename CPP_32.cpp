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
    if(xs.size() % 2 != 0) return -1; // invalid input
    double x = 0.5; // initial guess
    for(int i=0;i<1000 && abs(poly(xs,x)) > 1e-9;i++){
        x -= poly(xs,x)/poly(vector<double>(xs.begin(), xs.end()),x); // Newton-Raphson method
    }
    return x;
}