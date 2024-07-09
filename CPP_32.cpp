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
    if(xs.size() % 2 != 0)
        return -1; // invalid input
    double x = 1;
    for(int i = 0; i < xs.size(); i++) {
        x = (-xs[i+1] / (i+1)) / x;
    }
    return x;
}