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
    int count = 0;

    while (true) {
        fib = a + b;
        a = b;
        b = fib;
        if (isPrime(fib)) {
            count++;
            if (count == n)
                return fib;
        }
    }
}

int main() {
    cout << prime_fib(1) << endl; // prints 2
    cout << prime_fib(2) << endl; // prints 3
    cout << prime_fib(3) << endl; // prints 5
    cout << prime_fib(4) << endl; // prints 13
    cout << prime_fib(5) << endl; // prints 89
    return 0;
}