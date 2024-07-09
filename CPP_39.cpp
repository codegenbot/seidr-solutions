```cpp
#include <iostream>
using namespace std;

int prime_fib(int n) {
    int a = 0, b = 1;
    int count = 0;
    while (true) {
        int fib = a + b;
        if (fib > n) break;
        a = b;
        b = fib;
        bool isPrime = true;
        for (int j = 2; j * j <= fib; j++) {
            if (fib % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) count++;
        if (count == n) return fib;
    }
    return 0;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int num = n; 
    cout << "The " << num << "th prime Fibonacci number is: " << prime_fib(num) << endl;
}