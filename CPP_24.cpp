#include <iostream>

int largest_divisor(int n) {
    int divisor = 1;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            divisor = i;
        }
    }
    return divisor;
}