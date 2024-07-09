#include <cmath>

bool is_simple_power(int x, int n){
    double y = pow(n, std::round(std::log(x)/std::log(n)));
    return y == x;
}