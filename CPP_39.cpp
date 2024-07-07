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
        int nextFibNum = fibNum + prevFibNum;
        if (isPrime(nextFibNum)) {
            if (++count == n)
                return nextFibNum;
            fibNum = prevFibNum;
            prevFibNum = nextFibNum;
        }
    }
}