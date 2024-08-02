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
    int a = 0, b = 1, fib = 1;
    while (true) {
        if (isPrime(fib)) {
            if (++n == 1)
                return a + 1;
            else if (--n == 1)
                return fib;
            a = b;
            b = fib;
            fib = a + b;
        } else
            fib = a + b;
    }
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The " << n << "th number that is a Fibonacci number and it's also prime is: " << prime_fib(n) << endl;
    return 0;
}