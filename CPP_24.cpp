#include <algorithm>

int largest_divisor(int n) {
    int divisor = 1;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            divisor = i;
            while (n % i == 0)
                n /= i;
        }
    }
    if (n > 1)
        divisor = n;
    return divisor;
}