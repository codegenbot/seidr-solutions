```cpp
#include <vector>
#include <cmath>

double find_zero(std::vector<double> coeffs){
    double sum = 0;
    double product = 1;
    int i;
    std::vector<double> x_coords; // declare variable

    for (i=0;i<coeffs.size();i++)
    {
        if(i%2==0)
            sum += coeffs[i];
        else
            product *= -coeffs[i]/(double)fact((int)i);
    }
    return -product/sum;
}

int fact(int n){
    int i,fact=1;
    for (i=1;i<=n;i++)
        fact*=i;
    return fact;
}

// declare variable and function
std::vector<double> coeffs;
void poly(std::vector<double> coeffs, double solution) {
    double val = 0;
    for(int i = 0; i < coeffs.size(); i++) {
        if(i % 2 == 0)
            val += coeffs[i];
        else
            val += -coeffs[i] / fact(i) * pow(solution, i);
    }
    cout << "Polynomial evaluated at solution is: " << val << endl;
}

int main() {
    int n; // declare variable
    std::cout << "Enter the degree of polynomial (n): ";
    cin >> n;

    coeffs.resize(n+1); // declare variable
    for(int i = 0; i <= n; i++) {
        std::cout << "Enter coefficient at power " << i << ": ";
        cin >> coeffs[i];
    }

    double solution = find_zero(coeffs);
    poly(coeffs, solution);

    return 0;
}