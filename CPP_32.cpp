#include <vector>
#include <cmath>
#include <random>

using namespace std;

double find_zero(vector<double> xs){
    double sum = 0;
    double coeff = xs[0];
    vector<double> coeffs; 
    for (int i = 1; i < xs.size(); i++) {
        if (i % 2 == 0) {
            sum += xs[i] / coeff;
            coeffs.push_back(coeff); 
        }
        else{
            coeff = xs[i];
        }
    }
    return -sum / coeff;
}

int main() {
    vector<double> xs; 
    double solution = find_zero(xs);
    // call poly function here with coeffs and solution as arguments
    assert (abs(poly(coeffs, solution))< 1e-3); 
}