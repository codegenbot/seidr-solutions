#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

double poly(vector<double> xs, double x){
    double sum=0;
    for (int i=0;i<xs.size();i++)
    {
        sum+=xs[i]*pow(x,i);
    }
    return sum;
}

double find_zero(vector<double> xs){
    if(xs.size() % 2 != 0) return -1; // check if the number of coefficients is even
    double x = 1.0;
    for(int i=0; i<xs.size();i++)
        if(abs(xs[i]) > abs(xs[0])) 
            x = 0.0;
    
    double y = poly(xs, x);
    while(abs(y) > 0.00001){
        x -= y / poly(vector<double>(xs.begin(), xs.end()), x); // Newton's method
        y = poly(xs, x);
    }
    return x;
}