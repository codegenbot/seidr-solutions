#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0)
            return false;
    return true;
}

int prime_fib(int n) {
    int a = 0, b = 1, fib = 0;
    for (int i = 1; ; i++) {
        fib = a + b;
        a = b;
        b = fib;
        if (isPrime(fib) && ++n == 0)
            return fib;
    }
}

int main() {
    cout << prime_fib(1) << endl;
    cout << prime_fib(2) << endl;
    cout << prime_fib(3) << endl;
    cout << prime_fib(4) << endl;
    cout << prime_fib(5) << endl;
    return 0;
}