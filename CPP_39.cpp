```cpp
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int prime_fib(int n) {
    int a = 0, b = 1, fib = 0;
    while (true) {
        fib = a + b;
        if (fib > n) break;
        a = b;
        b = fib;
        if (isPrime(fib)) return fib; 
    }
    return -1; 
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int result = prime_fib(n);
    std::string str = (result == -1) ? "not found" : to_string(result);
    cout << "The " << n << "th prime Fibonacci number is: " << str << endl;
}