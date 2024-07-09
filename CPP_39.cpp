```cpp
#include <iostream>
using namespace std;

int prime_fib(int n) {
    int a = 0, b = 1;
    int count = 0;
    while (true) {
        if (b > n) break;
        bool isPrime = true;
        for (int j = 2; j * j <= b; j++) {
            if (b % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) count++;
        if (count == n) return b;
        int temp = a;
        a = b;
        b = temp + b;
    }
    return 0;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The " << n << "th prime Fibonacci number is: " << prime_fib(n) << endl;
}