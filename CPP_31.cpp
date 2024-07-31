#include <iostream>
using namespace std;

bool is_prime(int n) {
    bool is_divisor = false;
    for (int i = 2; i * i <= n && !is_divisor; ++i) {
        if (n % i == 0) {
            is_divisor = true;
        }
    }
    return !is_divisor;
}