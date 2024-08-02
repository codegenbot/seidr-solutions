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
    int fibNum = 0, prevFib = 1, temp = 0;
    int count = 0;

    while (true) {
        temp = fibNum + prevFib;
        if (isPrime(temp)) {
            fibNum = temp;
            count++;
            if (count == n)
                return fibNum;
        }
        prevFib = fibNum;
        fibNum = temp;
    }
}

int main() {
    int n;
    cout << "Enter the position of the prime Fibonacci number: ";
    cin >> n;
    cout << "The " << n << "th prime Fibonacci number is: " << prime_fib(n) << endl;
    return 0;
}