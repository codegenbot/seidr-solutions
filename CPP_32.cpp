```
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

void find_zero(vector<double> xs){
    if(xs.size()%2 != 0) printf("-1"); // Print -1 if the number of coefficients is odd
    else{
        double x=-1*fmax(-1*min(xs),-1*(xs[0]-1.0));
        while(abs(poly(xs,x)) > 1e-5)
        {
            x+=0.1;
        }
        std::fixed; std::cout << std::setprecision(2) << x << std::endl;
    }
}