#include <stdio.h>
#include <vector>

using namespace std;

int prime_fib(int n) {
    vector<int> fib(1);
    int a = 0, b = 1;
    for (int i = 2; i <= n; ++i) {
        int temp = a + b;
        if (isPrime(temp)) {
            fib.push_back(temp);
            if (fib.size() == n) return temp;
        }
        a = b;
        b = temp;
    }
    return -1; // not found
}

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2, sqrti = sqrt(num); i <= sqrti; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}