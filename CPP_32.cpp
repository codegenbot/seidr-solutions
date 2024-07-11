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
    if(xs.size() % 2 != 0) return -1.0; // invalid input
    double x = 0.5; // initial guess
    for(int i=0; i<10000; i++) {
        double f = poly(xs, x);
        if(fabs(f)<1e-6) return x;
        x -= f / poly(vector<double>(xs.begin(), xs.end()), x); // Newton's method
    }
    return -1.0; // no solution found
}