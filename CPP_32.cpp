#include<stdio.h>
#include<cmath>
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
    if(xs.size() % 2 != 0) return -1; // Return -1 if number of coefficients is odd
    double root = -xs[1]/(2*xs[0]); 
    return round(std::setprecision(2) << root );
}