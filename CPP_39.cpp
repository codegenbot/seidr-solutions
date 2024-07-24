#include <iostream>

using namespace std;

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int prime_fib(int n) {
    int fib = 0, a = 0, b = 1, count = 0;
    while (true) {
        fib = a + b;
        if (isPrime(fib)) {
            count++;
            if (count == n)
                return fib;
        }
        a = b;
        b = fib;
    }
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The " << n << "th number that is a Fibonacci number and it's also prime is: " << prime_fib(n) << endl;
    return 0;
}