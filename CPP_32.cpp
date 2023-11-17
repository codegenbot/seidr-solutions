#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;
double poly(vector<double> xs, double x){
    /* 
    Evaluates polynomial with coefficients xs at point x. return xs[0] + xs[1] * x + xs[1] * x^2 + .... xs[n] * x^n 
    */
    double sum=0;
    int i,n;
    n=xs.size();
    for (i=0;i<n;i++)
    {
        sum+=xs[i]*pow(x,i);
    }
    return sum;
}

double find_zero(vector<double> xs, double a, double b){
    /*
    xs are coefficients of a polynomial. find_zero find x such that poly(x) = 0. find_zero returns only only zero point, even if there are many. 
    Moreover, find_zero only takes list xs having even number of coefficients and largest non zero coefficient as it guarantees a solution.
    >>> round(find_zero([1, 2]), 2) #f(x) = 1 + 2x 
    -0.5 
    >>> round(find_zero([-6, 11, -6, 1]), 2) # (x - 1) * (x - 2) * (x - 3) = -6 + 11x - 6x^2 + x^3 
    1.0
    */
    double mid,y1,y2;
    mid=(a+b)/2;
    y1=poly(xs,a);
    y2=poly(xs,b);
    if(y1==0)
        return a;
    else if(y2==0)
        return b;
    else
    {
        if(y1*y2<0)
        {
            while(abs(a-b)>0.00001)
            {
                mid=(a+b)/2;
                y1=poly(xs,a);
                y2=poly(xs,b);
                if(y1*y2<0)
                {
                    if(poly(xs,mid)==0)
                        return mid;
                    else if(poly(xs,mid)*y1<0)
                        b=mid;
                    else
                        a=mid;
                }
                else
                    return mid;
            }
        }
        else
        {
            while(abs(a-b)>0.00001)
            {
                mid=(a+b)/2;
                y1=poly(xs,a);
                y2=poly(xs,b);
                if(y1*y2<0)
                {
                    if(poly(xs,mid)==0)
                        return mid;
                    else if(poly(xs,mid)*y1<0)
                        b=mid;
                    else
                        a=mid;
                }
                else
                    return mid;
            }
        }
    }
}
