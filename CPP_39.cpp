#include <iostream>
using namespace std;

bool isPrime(int num);

int prime_fib(int n);

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The " << n << "th prime Fibonacci number is: " << prime_fib(n) << endl; 
}

int prime_fib(int n) {
    if (n <= 0)
        return -1;

    int a = 0, b = 1, count = 0;
    while (true) {
        if (isPrime(b))
            count++;
        if (count == n)
            return b;
        a += b;
        b = a - b;
    }
}

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0)
            return false;
    return true;
}