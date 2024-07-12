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
    if(xs.size() % 2 != 0) return -1; // if number of coefficients is odd, there's no root
    double sum = 0, sum1 = 0;
    for(int i=0;i<xs.size();i++){
        if(i%2 == 0) sum += xs[i];
        else sum1 += xs[i];
    }
    return -sum1/sum; // the zero is at x = -sum1/sum
}