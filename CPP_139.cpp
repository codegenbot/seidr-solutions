#include <stdio.h>
using namespace std;

long long special_factorial(int n) {
    long long result = 1;
    for (int i = n; i > 0; --i) {
        result *= fact(i);
    }
    return result;
}

long long fact(int n) {
    if(n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}