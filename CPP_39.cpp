#include <stdio.h>
#include <vector>

using namespace std;

int prime_fib(int n) {
    vector<int> fib = {0, 1};
    int i = 2;
    while (fib.size() <= n) {
        fib.push_back(fib[i-1] + fib[i]);
        i++;
    }
    for (int j = fib.size()-1; j >= 0; j--) {
        if (isPrime(fib[j])) {
            return fib[j];
        }
    }
    return -1;
}

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