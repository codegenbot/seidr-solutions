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
    if(xs.size() % 2 != 0 || abs(xs[0]) < 1e-9) 
        return -1.0; // invalid input
    double x = 1.0;
    for(int i=0; i<xs.size(); i+=2)
    {
        while(poly(xs, x) > 0 && poly(xs, x) < 1e-9)
            x -= 0.5;
    }
    return round(x, 10);
}