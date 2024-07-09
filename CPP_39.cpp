#include <iostream>
using namespace std;

int prime_fib(int n) {
    int a = 0, b = 1;
    int count = 1;
    while (true) {
        int fib = a + b;
        if (fib > n) return count;
        a = b;
        b = fib;
        bool isPrime = true;
        for (int j = 2; j * j <= fib; j++) {
            if (fib % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (!isPrime) continue;
        count++;
    }
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The " << prime_fib(n) << "th prime Fibonacci number is: " << endl;
    return 0;
}