```
#include <cmath>

bool is_simple_power(int x, int n){
    return pow(n, log(x)/log(n)) == x;
}