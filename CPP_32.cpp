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
    double a = xs[0];
    double b = 0;
    double c = 0;

    if(xs.size() > 1) {
        for(int i=1; i<xs.size();i++) {
            if(i % 2 == 0)
                b += xs[i] * pow(1, (i-1)/2);
            else
                c -= xs[i] * pow(-1, (i-1)/2);
        }
    }

    double d = b*b - 4*a*c;
    
    if(d < 0) return 0; // no real solution

    double sqrt_d = sqrt(d);

    double t1 = (-b + sqrt_d)/(2*a);
    double t2 = (-b - sqrt_d)/(2*a);

    if(t1 > t2) swap(t1, t2);

    return min(t1, t2);
}