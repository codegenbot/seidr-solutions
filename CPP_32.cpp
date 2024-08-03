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
    if(xs.size() % 2 != 0) // Check if number of coefficients is even
        return -1; // Return -1 if not

    double x = -xs[1]/xs[3]; // Calculate the zero point using the formula for a quadratic equation
    return x;
}