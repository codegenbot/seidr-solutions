```cpp
#include <iostream>
using namespace std;

int prime_fib(int n) {
    int a = 0, b = 1;
    int count = 0;
    for (int i = 2; ; i++) {
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
        if (count == n) return i;
    }
    return -1; 
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    string output = "The " + to_string(n) + "th prime Fibonacci number is: " + string(to_string(prime_fib(n))) + "\n";
    cout << output;
    return 0;
}