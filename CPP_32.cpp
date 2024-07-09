````
#include <vector>
using namespace std;

// Function to calculate polynomial
double poly(vector<double> coeffs, double solution) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(solution, i);
    }
    return result;
}

// Function to find zero
double find_zero(vector<double> xs){
    double sum = 0;
    vector<double> coeffs; 
    for (int i = 1; i < xs.size(); i++) {
        if (i % 2 == 0) {
            coeffs.push_back(xs[i] / xs[0]);
        }
    }
    double solution = -sum / xs[0]; 
    assert(abs(poly(coeffs, solution)) < 1e-3); 
    return solution;
}
```