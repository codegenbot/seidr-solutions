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
        return -1.0; //return -1.0 to indicate invalid input

    double x = -xs[1]/(2*xs[1]);
    if (poly(xs, x) < 0.00001)
        return round(x, 2);
    else
        return -1.0;
}