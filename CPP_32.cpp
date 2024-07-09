```cpp
#include <iostream>
#include <vector>

double poly(const std::vector<double>& xs, double x) {
    double res = 0;
    for (int i = 0; i < xs.size(); i++) {
        res += xs[i] * pow(x, i);
    }
    return res;
}

double find_zero(std::vector<double> xs){
    if(xs.size() % 2 != 0) return -1; 
    double x = 1;
    while (std::abs(poly(xs, x)) > 1e-9) {
        x -= poly(xs, x) / (poly({xs[0], xs[2]}, x));
    }
    return x;
}