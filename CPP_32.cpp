```cpp
#include <vector>
using namespace std;

double poly(vector<double> c, double x) {
    double result = 0;
    for (int i = 0; i < c.size(); i++) {
        result += c[i] * pow(x, i);
    }
    return result;
}

double find_zero(vector<double> coeffs){
    vector<double> xs(2); // define coeffs
    double x = -coeffs[1] / (2*coeffs[0]);
    if (poly(coeffs, x) < 0.00001) { // declare poly before calling it
        return x;
    } else {
        return -1; // or handle the error as per your requirement
    }
}