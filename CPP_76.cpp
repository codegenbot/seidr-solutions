#include <cassert>
#include <cmath>

bool is_simple_power(int x, int n) {
    double y = pow(n, 1);
    while(y <= x){
        if(y == x) return true;
        y *= n;
    }
    return false;
}