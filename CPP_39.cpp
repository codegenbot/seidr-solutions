#include <iostream>

using namespace std;

int prime_fib(int n) {
    int a = 0, b = 1;
    for (int i = 2; ; i++) {
        int fib = a + b;
        if (fib >= n) break;
        a = b;
        b = fib;
    }
    for (int i = 2; fib % i != 0 && i * i <= fib; i++)
        ;
    return fib;
}

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << prime_fib(i) << endl;
    }
    return 0;
}