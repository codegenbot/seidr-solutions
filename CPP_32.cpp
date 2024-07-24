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
    if(xs.size() % 2 != 0) return -1; // Check if the number of coefficients is even
    double max_coeff = 0.0;
    for(int i=0; i<xs.size(); i++) {
        if(abs(xs[i]) > abs(max_coeff)) 
            max_coeff = xs[i];
    }
    double x = -max_coeff / xs[1]; // Calculate the zero point using the largest non-zero coefficient
    return x;
}