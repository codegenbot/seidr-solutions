#include <stdio.h>
#include <string>
#include <cmath>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool prime_length(string str) {
    int length = str.length();
    return is_prime(length);
}