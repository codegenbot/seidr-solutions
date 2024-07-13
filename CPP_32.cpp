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
    double x = 1.0; // Start with x = 1
    for(int i = 0; i < xs.size(); i += 2){ // Loop through every other coefficient
        while(abs(poly(xs, x)) > 1e-9){ // Check if the polynomial is close to zero
            x -= poly(xs, x) / (xs[i] * pow(x, i)); // Update x using Newton's method
        }
    }
    return round(x, 2); // Return the found root with two decimal places
}