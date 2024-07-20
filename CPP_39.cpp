#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1)
        return false;
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
        if (isPrime(fib) && ++i == n)
            return fib;
    }
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The " << n << "th prime Fibonacci number is " << prime_fib(n) << endl;
    return 0;
}