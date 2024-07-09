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
    double root = 1.0; // initial guess
    double tol = 1e-6; // tolerance
    for(int i=0; i<1000; i++) {
        double f = poly(xs, root);
        if (fabs(f) < tol) return root;
        double df = xs[1]; // derivative at the current point
        for(int j=2; j<xs.size(); j++)
            df *= root;
        root -= f / df;
    }
    return -1.0; // no solution found
}