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
    int fib_num = 0, prev_prev = 0, prev = 1;
    int count = 0;

    while (true) {
        fib_num = prev + prev_prev;
        prev_prev = prev;
        prev = fib_num;

        if (isPrime(fib_num)) {
            count++;
            if (count == n)
                return fib_num;
        }
    }
}

int main() {
    int n;
    cout << "Enter the position of the Fibonacci number: ";
    cin >> n;
    cout << "The " << n << "th prime Fibonacci number is " << prime_fib(n) << endl;
    return 0;
}