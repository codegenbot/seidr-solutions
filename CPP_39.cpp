#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int primeFib(int n) {
    int a = 0, b = 1, fib = 0;
    while (true) {
        fib = a + b;
        if (isPrime(fib)) return fib;
        a = b;
        b = fib;
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The first prime Fibonacci number greater than " << num << " is " << (num > 1 ? primeFib(num + 1) : -1) << endl;
    return 0;
}