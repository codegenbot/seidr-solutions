```cpp
#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <iomanip>

using namespace std;

double find_zero(vector<double> coeffs, double x) {
    double poly = 0;
    double power = 1;
    for (double coeff : coeffs) {
        poly += coeff * pow(x, power);
        power++;
    }
    return -pow(x,2) + poly;
}

cout << fixed << setprecision(6) << find_zero(coeffs, solution) << endl;