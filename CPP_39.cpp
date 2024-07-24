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
    cout << prime_fib(1) << endl; 
    cout << prime_fib(2) << endl; 
    cout << prime_fib(3) << endl; 
    cout << prime_fib(4) << endl; 
    cout << prime_fib(5) << endl; 
    return 0;
}