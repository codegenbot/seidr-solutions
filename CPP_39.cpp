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
    int fibNum = 0, prevFib = 1, count = 0;
    while (true) {
        int temp = fibNum + prevFib;
        fibNum = prevFib;
        prevFib = temp;
        if (isPrime(prevFib)) {
            count++;
            if (count == n)
                return prevFib;
        }
    }
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The " << n << "th prime Fibonacci number is: " << prime_fib(n) << endl;
    return 0;
}