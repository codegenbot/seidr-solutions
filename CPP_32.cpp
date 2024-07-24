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
    if(xs.size() % 2 == 1) // check if the number of coefficients is odd
        return -1; // no zero point guaranteed

    double a = xs[0]; // largest coefficient
    for(int i=1;i<xs.size();i++)
    {
        if(abs(xs[i]) > abs(a))
            a = xs[i];
    }

    double root = -a/xs.back();
    return round(root, 10); // round to 10 decimal places
}