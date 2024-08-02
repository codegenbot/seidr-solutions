#include <bits/stdc++.h>

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0)
            return false;
    return true;
}

int prime_length(string str) {
    int len = str.length();
    return isPrime(len);
}

int main() {
    assert(prime_length("0") == 1);
    return 0;
}