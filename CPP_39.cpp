```cpp
#include <iostream>
using namespace std;

int prime_fib(int n) {
    int a = 0, b = 1, c;
    while (n > 2) {
        c = a + b;
        if (isPrime(c)) {
            n--;
        }
        a = b;
        b = c;
    }
    return n == 1 ? a : b;
}

int isPrime(int num) {
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
```