#include <stdio.h>
using namespace std;

long long special_factorial(int n){
    long long res = 1;
    for (int i = 1; i <= n; ++i) {
        res *= fact(i);
    }
    return res;
}

long long fact(int n){
    if(n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}