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
    int fib_num = 0, prev_fib = 1, temp;
    int count = 0;

    while (true) {
        temp = fib_num + prev_fib;
        if (isPrime(temp)) {
            if (++count == n)
                return temp;
            fib_num = prev_fib;
            prev_fib = temp;
        }
    }
}