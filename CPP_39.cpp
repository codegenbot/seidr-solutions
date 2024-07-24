#include <iostream>

using namespace std;

int prime_fib(int n) {
    int fib = 0, a = 1, b = 1;
    for (int i = 2; ; i++) {
        if (i == n) return b;
        fib = a + b;
        a = b;
        b = fib;
        if (!isPrime(fib)) continue;
    }
}

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    cout << prime_fib(n) << endl;
    return 0;
}