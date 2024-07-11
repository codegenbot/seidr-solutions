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
    if(xs.size() % 2 != 0) // check if the number of coefficients is even
        return -1; // return -1 if not

    double x = 0.5; // start with x = 0.5
    double precision = 0.000001;

    while(true){
        double y = poly(xs, x);
        if(abs(y) < precision)
            return x;
        x += (x > 0 ? -1 : 1); // adjust x
    }
}