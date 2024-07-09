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
    if(xs.size() % 2 != 0) // check if the number of coefficients is even
        return -1; // return -1 if not

    double x = xs[1] / xs[0]; // initial guess for root
    double tol = 1e-5; // tolerance
    int max_iter = 100; // maximum iterations
    
    for(int i=0;i<max_iter;i++){
        double p = poly(xs, x); // evaluate polynomial at x
        
        if(abs(p) < tol) // check if the value of the polynomial is close to zero
            return x;
        
        double dp = poly(vector<double>(xs.begin() + 1, xs.end()), x); // derivative of the polynomial
        
        if(dp == 0) // check for division by zero
            return -1; // return -1 if not
        
        x -= p / dp; // update the root using Newton's method
    }
    
    return -1; // return -1 if no root is found after max_iter iterations
}