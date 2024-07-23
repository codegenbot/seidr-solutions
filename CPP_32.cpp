```
#include <vector>
#include <cmath>

double find_zero(std::vector<double> xs){
    double sum = 0;
    double product = 1;
    int i;
    std::vector<double> coeffs; // declare and initialize
    for (i=0;i<xs.size();i++)
    {
        if(i%2==0)
            sum += xs[i];
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

double poly(std::vector<double> coeffs, double solution){
    double result = 0.0;
    for(int i = 0; i < coeffs.size(); i++){
        result += coeffs[i] * pow(solution, i);
    }
    return result;
}
int main() {
    std::vector<double> coeffs; // declare
    double solution = find_zero(coeffs); // declare and assign 
    return 0;
}