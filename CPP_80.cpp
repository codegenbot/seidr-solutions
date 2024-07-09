#include <iostream>

bool is_happy(int n) {
    if (n < 10) {
        return n % 10 == 1 && n != 1;
    }
    int sum = 0;
    while(n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return is_happy(sum);
}