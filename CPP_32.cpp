#include <iostream>
#include <vector>
using namespace std;

int fact(int n) {
    int i,fact=1;
    for (i=1;i<=n;i++)
        fact*=i;
    return fact;
}

double find_zero(vector<double> coeffs, double solution){
    vector<double> xs(5);
    double sum = 0;
    double product = 1;
    int i;
    for (i=0;i<coeffs.size();i++)
    {
        xs[i] = 2.0 - (double)i; // Initialize the x values
    }
    
    for (i=0;i<xsize();i++) {
        if(i%2==0)
            sum += f(poly, coeffs, solution);
        else
            product *= -f(poly, coeffs, solution)/(double)fact((int)i);
    }
    return -product/sum;
}

double poly(vector<double> coeffs, double x){
    double result = 0;
    for(int i=0; i<coeffs.size();i++) {
        result += coeffs[i]*pow(x,(coeffs.size()-1-i));
    }
    return result;
}