#include <iostream>

using namespace std;

int prime_fib(int n) {
    int fib = 0, a = 1, b = 1;
    for (int i = 1; ; i++) {
        if (i == n) {
            return fib;
        }
        fib = a + b;
        int temp = a;
        a = b;
        b = temp + fib;
        bool isPrime = true;
        for (int j = 2; j * j <= fib; j++) {
            if (fib % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (!isPrime) {
            a = b;
            b = temp + fib;
        }
    }
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The " << n << "th number that is a Fibonacci number and it's also prime is: " << prime_fib(n) << endl;
    return 0;
}