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
    double left = 1e9, right = -1e9; // Initialize the range
    for(int i = 0; i < xs.size(); i++){
        if(i % 2 == 0) {
            right = min(right, (double)-xs[i]/xs[i+1]);
            left = max(left, (double)-xs[i]/xs[i+1]);
        }
    }
    double ans = (left + right)/2;
    while(abs(poly(xs,ans)) > 1e-9){
        if(poly(xs,ans) < 0) {
            right = ans;
        } else {
            left = ans;
        }
        ans = (left + right)/2;
    }
    return round(ans, 2);
}