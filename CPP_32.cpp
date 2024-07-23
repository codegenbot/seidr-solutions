```cpp
#include <vector>
using namespace std;

double find_zero(vector<double> coeffs){
    double x = 1; 
    while (true) {
        double fx = poly(coeffs,x);
        double dfx = poly_prime(coeffs,x);
        if (abs(fx)< 1e-3 || abs(dfx)< 1e-6)
            return x;
        x -= fx / dfx;
    }
}

double poly(vector<double> coeffs, double x){
    double sum = 0;
    for(int i=0; i<coeffs.size(); i++)
        sum += coeffs[i]*pow(x,i);
    return sum;
}

double poly_prime(vector<double> coeffs, double x){
    double sum = 0;
    for(int i=1; i<coeffs.size(); i++)
        sum += i*coeffs[i]*pow(x,i-1);
    return sum;
}