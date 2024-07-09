```cpp
#include <vector>
#include <cmath>

double find_zero(vector<double> poly) {
    double a = poly[0];
    double b = 0;
    for (int i = 1; i < poly.size(); i += 2) {
        b -= poly[i] / pow(poly[i-1], i/2);
    }
    return -b / a;
}