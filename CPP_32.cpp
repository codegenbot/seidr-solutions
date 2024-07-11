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
    while(true) {
        double val = poly(xs, x);
        if(abs(val) < 1e-9) // small enough, consider it zero
            return x;
        if(val > 0) // increase x
            x += 0.01;
        else // decrease x
            x -= 0.01;
    }
}