#include<stdio.h>
#include<math.h>
using namespace std;

bool is_simple_power(int x, int n) {
    if (n == 1)
        return true;
    double y = pow(n, ceil(log(x)/log(n)));
    return y == x;
}