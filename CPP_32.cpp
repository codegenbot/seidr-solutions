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
    // xs are coefficients of a polynomial. find_zero find x such that poly(x) = 0. find_zero returns only one zero point, even if there are many.
    // Moreover, find_zero only takes list xs having even number of coefficients and largest non zero coefficient as it guarantees a solution.

    double sum = 1.0;
    for (int i = 2; i < xs.size(); i += 2) {
        sum = -xs[i]/(i * pow(xs[i-1], i));
    }

    return sum;
}