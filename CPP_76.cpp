#include <cmath>

bool is_simple_power(int x, int n){
    double y = pow(n, ceil(log2(x)/log2(n)));
    return y == x;
}