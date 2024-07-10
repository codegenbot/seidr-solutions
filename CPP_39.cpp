#include<iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int prime_fib(int n) {
    if (n == 1) {
        return 2;
    }
    if (n == 2) {
        return 3;
    }
    int a = 2, b = 3, c;
    for (int i = 3; i <= n; i++) {
        c = a + b;
        while (!isPrime(c)) {
            c++;
        }
        a = b;
        b = c;
    }
    return c;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << prime_fib(n) << endl;
    return 0;
}