#include <iostream>
using namespace std;

int prime_fib(int n) {
    int a = 0, b = 1;
    for (int i = 0; i < n; ++i) {
        if (isPrime(b)) {
            return b;
        }
        int temp = a;
        a = b;
        b = temp + b;
    }
    return -1;
}

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The " << n << "th Fibonacci number that is prime is: " << prime_fib(n) << endl;
    return 0;
}