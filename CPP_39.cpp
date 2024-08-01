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
    int fib_num = 0, fib_prev = 0, fib_curr = 1, count = 0;
    
    while (true) {
        if (isPrime(fib_curr)) {
            fib_num++;
            if (fib_num == n)
                return fib_curr;
        }
        
        fib_prev = fib_curr;
        fib_curr += fib_prev + 1;
    }
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The " << n << "th prime Fibonacci number is " << prime_fib(n) << endl;
    return 0;
}