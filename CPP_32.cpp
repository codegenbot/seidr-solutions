```cpp
#include <vector>
#include <cmath>

double poly(vector<double> coeffs, double x) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(vector<double> coeffs) {
    // implement your logic to find the zero
    // this could be Newton's method or some other numerical method
    // for now, just initialize it as 1.0
    double x = 1.0;
    double tol = 0.000001; // tolerance

    do {
        double prev_x = x;
        x = poly(coeffs, x) / poly({1} + coeffs, x);
    } while (abs(x - prev_x) > tol);

    return x;
}

int main() {
    vector<double> coeffs;
    // fill coeffs...

    double solution = find_zero(coeffs);

    // use poly and solution here...
}