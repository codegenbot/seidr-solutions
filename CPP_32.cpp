#include <vector>
using namespace std;

double find_zero(vector<double> xs, vector<int> coeffs, double solution){
    double sum = 0;
    double product = 1;
    int i;
    for (i=0;i<xs.size();i++)
    {
        if(i%2==0)
            sum += xs[i]*coeffs[i];
        else
            product *= -xs[i]/(double)fact((int)i);
    }
    return -product/sum;
}

int fact(int n){
    int i,fact=1;
    for (i=1;i<=n;i++)
        fact*=i;
    return fact;
}