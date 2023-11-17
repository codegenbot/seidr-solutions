#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;
double poly(vector<double> xs, double x){
    /* 
    Evaluates polynomial with coefficients xs at point x. return xs[0] + xs[1] * x + xs[1] * x^2 + .... xs[n] * x^n 
    */
    double sum=0;
    int i;
    for (i=0;i<xs.size();i++)
    {
        sum+=xs[i]*pow(x,i);
    }
    return sum;
}

double find_zero(vector<double> xs){
    /*
    xs are coefficients of a polynomial. find_zero find x such that poly(x) = 0. find_zero returns only only zero point, even if there are many. 
    Moreover, find_zero only takes list xs having even number of coefficients and largest non zero coefficient as it guarantees a solution.
    >>> round(find_zero([1, 2]), 2) #f(x) = 1 + 2x 
    -0.5 
    >>> round(find_zero([-6, 11, -6, 1]), 2) # (x - 1) * (x - 2) * (x - 3) = -6 + 11x - 6x^2 + x^3 
    1.0
    */
    double a,b;
    int i,j;
    vector<double> ys;
    for (i=0; i<xs.size();i++)
    {
        ys.push_back(xs[i]);
    }
    for (i=1; i<ys.size();i++)
    {
        ys[i]=ys[i]+ys[i-1]/2;
    }
    for (i=0; i<ys.size()/2;i++)
    {
        a=ys[2*i];
        b=ys[2*i+1];
        if (a*b<=0)
        {
            break;
        }
    }
    for (j=0; j<100;j++)
    {
        if (poly(xs,a)*poly(xs,(a+b)/2)<=0)
        {
            b=(a+b)/2;
        }
        else
        {
            a=(a+b)/2;
        }
    }
    return (a+b)/2;
}

int main()
{
    vector<double> xs;
    xs.push_back(1);
    xs.push_back(2);
    printf("%f",find_zero(xs));
    return 0;
}
