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
    if(xs.size() % 2 != 0) return -1.0; // Only works with even number of coefficients
    double maxCoeff = 0.0;
    int maxIndex = 0;
    for(int i = 1; i < xs.size(); i+=2)
    {
        if(abs(xs[i]) > abs(maxCoeff))
        {
            maxCoeff = xs[i];
            maxIndex = i;
        }
    }

    double x = -maxCoeff / (xs[maxIndex]);
    return x;
}