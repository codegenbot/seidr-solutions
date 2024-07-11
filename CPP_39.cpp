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
    int fibNum = 0, prevFibNum = 1, count = 0;
    while (true) {
        int newFibNum = fibNum + prevFibNum;
        if (isPrime(newFibNum)) {
            fibNum = newFibNum;
            count++;
            if (count == n)
                return fibNum;
        }
        prevFibNum = fibNum;
        fibNum = newFibNum;
    }
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The " << n << "th prime Fibonacci number is: " << prime_fib(n) << endl;
    return 0;
}