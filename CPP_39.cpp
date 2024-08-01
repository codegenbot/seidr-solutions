#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int prime_fib(int n) {
    int fib_num = 0, prev_prev = 0, prev = 1;
    for (int i = 1; ; i++) {
        int temp = prev + prev_prev;
        if (isPrime(temp)) {
            fib_num++;
            if (fib_num == n) return temp;
        }
        prev_prev = prev;
        prev = temp;
    }
}

int main() {
    cout << prime_fib(1) << endl; // prints 2
    cout << prime_fib(2) << endl; // prints 3
    cout << prime_fib(3) << endl; // prints 5
    cout << prime_fib(4) << endl; // prints 13
    cout << prime_fib(5) << endl; // prints 89
    return 0;
}