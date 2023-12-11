```
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int hex_key(string num) {
    int count = 0;
    for (int i = 0; i < num.length(); i++) {
        char c = num[i];
        if (isPrime(c - '0')) count++;
    }
    return count;
}
```