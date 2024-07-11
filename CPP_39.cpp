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
    int a = 0, b = 1;
    for (int i = 0; ; i++) {
        if (isPrime(b)) {
            if (i == n - 1)
                return b;
            int temp = a;
            a = b;
            b = temp + b;
        } else {
            int temp = a;
            a = b;
            b = temp + b;
        }
    }
}

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << prime_fib(i) << endl;
    }
    return 0;
}