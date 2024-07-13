#include <iostream>
using namespace std;

int prime_fib(int n) {
    int a = 0, b = 1;
    for (int i = 2; ; i++) {
        int fib = a + b;
        if (fib > n)
            return i;
        a = b;
        b = fib;
        bool isPrime = true;
        for (int j = 2; j * j <= fib; j++)
            if (fib % j == 0) {
                isPrime = false;
                break;
            }
        if (!isPrime)
            continue;
        return i;
    }
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The " << n << "th number that is a Fibonacci number and it's also prime is: " << prime_fib(n) << endl;
    return 0;
}