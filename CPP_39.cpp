#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int prime_fib(int n) {
    if (n == 1)
        return 2;
    if (n == 2)
        return 3;

    int count = 2;
    int fib1 = 2;
    int fib2 = 3;
    int fibN = 0;
    while (count < n) {
        fibN = fib1 + fib2;
        if (isPrime(fibN))
            count++;
        fib1 = fib2;
        fib2 = fibN;
    }
    return fibN;
}

int main() {
    int n;
    cin >> n;
    cout << prime_fib(n) << endl;
    return 0;
}