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
    double x = 1.0;
    for(int i=0; i<xs.size();i++){
        x = -xs[i]/xs[xs.size()-1-i];
        if(abs(poly(xs, x)) < 1e-9) // check if poly(x) is close to zero
            return x;
    }
    return -1; // return -1 if no solution found
}