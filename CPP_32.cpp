#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

double poly(vector<double> xs, double x){
    double sum=0;
    for (int i=0;i<xs.size();i++){
        sum+=xs[i]*pow(x,i);
    }
    return sum;
}

double find_zero(vector<double> xs){
    double a = xs[xs.size()-1];
    double b = xs[xs.size()-2];
    return -b/a;
}