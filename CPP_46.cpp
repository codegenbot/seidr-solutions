#include<stdio.h>
using namespace std;

int fib4(int n) {
    if (n <= 1)
        return 0;
    int a = 2, b = 0, c = 0, d = 0;
    for (int i = 3; i <= n; ++i) {
        int temp = a + b + c;
        a = b;
        b = c;
        c = d;
        d = temp;
    }
    return d;
}