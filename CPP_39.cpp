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
    int fibNum = 0, prevFibNum = 1, count = 0;
    while (true) {
        int newFibNum = fibNum + prevFibNum;
        if (isPrime(newFibNum)) {
            if (++count == n) return newFibNum;
            fibNum = prevFibNum;
            prevFibNum = newFibNum;
        } else {
            fibNum = prevFibNum;
            prevFibNum = newFibNum;
        }
    }
}

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << prime_fib(i) << endl;
    }
    return 0;
}