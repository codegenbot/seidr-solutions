#include <stdio.h>
using namespace std;

long long special_factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        long long fact = 1;
        for (int j = 1; j <= i; ++j)
            fact *= j;
        if (result == 0)
            result = fact;
        else
            result *= fact;
    }
    return result;
}