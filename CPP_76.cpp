#include<stdio.h>
#include<math.h>
using namespace std;
bool is_simple_power(int x, int n) {
    if (n <= 1) return x == 1;
    while (x > 1) {
        if (x % n != 0) return false;
        x /= n;
    }
    return x == 1;
}