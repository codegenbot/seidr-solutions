#include <vector>
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
    int fib_num = 2, prev_prev = 1, prev = 1;
    for (int i = 1; ; i++) {
        int temp = prev_prev + prev;
        if (isPrime(temp)) {
            fib_num = temp;
            if (++i == n) return fib_num;
        }
        prev_prev = prev;
        prev = temp;
    }
}

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << prime_fib(i) << endl;
    }
    return 0;
}