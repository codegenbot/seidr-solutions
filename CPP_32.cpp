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
    if(xs.size() % 2 != 0) // Check if the number of coefficients is even
        return -1.0; // Return -1.0 to indicate no solution

    double x = 1.0; // Initialize x with any value
    for(int i = 0; i < xs.size(); i++) {
        x = x - xs[i] / poly(xs, x); // Newton's method to find the root
    }
    return round(x,2); // Return the zero point rounded to two decimal places
}